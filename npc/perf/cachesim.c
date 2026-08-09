#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define M 4       // 块内偏移位数（2^4 = 16B）
#define G 1       // 组索引位数（示例值，组数=8）
#define W 1       // 组相联路数（4路）

uint32_t total_count;
uint32_t miss_count;
uint32_t hit_count;

typedef struct {
    uint32_t tag;
    bool valid;
    uint32_t timestamp; // 记录最后访问时间
} CacheBlock;

typedef struct {
    CacheBlock blocks[W];  // 每组W路
    uint32_t access_counter; // 组访问计数器，用于生成时间戳
} CacheGroup;

typedef struct {
    CacheGroup groups[1 << G]; // 共2^G组
} Cache;

void init_cache(Cache *cache) {
    for (int g = 0; g < (1 << G); g++) {
        CacheGroup *grp = &cache->groups[g];
        grp->access_counter = 0;
        for (int i = 0; i < W; i++) {
            grp->blocks[i].valid = false;
            grp->blocks[i].tag = 0;
            grp->blocks[i].timestamp = 0;
        }
    }
}

void get_cache_info(uint32_t addr, uint32_t *group, uint32_t *tag) {
    *group = (addr >> M) & ((1 << G) - 1); // 组索引位于块偏移后
    *tag = addr >> (M + G);                // 标签为剩余高位
}

void simulate_cache(Cache *cache, uint32_t pc) {
    uint32_t group, tag;
    get_cache_info(pc, &group, &tag);
    CacheGroup *grp = &cache->groups[group];

    // 检查命中
    int hit_idx = -1;
    for (int i = 0; i < W; i++) {
        if (grp->blocks[i].valid && grp->blocks[i].tag == tag) {
            hit_idx = i;
            break;
        }
    }

    if (hit_idx != -1) {
        hit_count++;
        // 更新命中块的时间戳
        grp->blocks[hit_idx].timestamp = grp->access_counter++;
        total_count++;
    } else {
        miss_count++;
        total_count++;

        // 寻找替换目标：无效块或LRU
        int lru_idx = 0;
        uint32_t min_ts = UINT32_MAX;
        for (int i = 0; i < W; i++) {
            if (!grp->blocks[i].valid) {
                lru_idx = i;
                break;
            }
            if (grp->blocks[i].timestamp < min_ts) {
                min_ts = grp->blocks[i].timestamp;
                lru_idx = i;
            }
        }

        // 替换并更新
        grp->blocks[lru_idx].tag = tag;
        grp->blocks[lru_idx].valid = true;
        grp->blocks[lru_idx].timestamp = grp->access_counter++;
    }
}

int main(int argc, char *argv[])
{
if (argc != 2) {
        fprintf(stderr, "Usage: %s <pc_trace_file>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *file_path = argv[1];
    FILE *file = fopen(file_path, "rb");
    if (!file) {
        perror("Failed to open file");
        return EXIT_FAILURE;
    }

		// 初始化缓存
    Cache cache;
    init_cache(&cache);

		uint32_t pc;

		// 逐个读取 pc 值并模拟缓存访问
    while (fread(&pc, sizeof(pc), 1, file) == 1) {
        simulate_cache(&cache, pc);
    }

    fclose(file);

    // 输出结果
    printf("Total accesses: %u\n", total_count);
    printf("Misses: %u\n", miss_count);
    printf("Miss rate: %.2f%%\n", ((float)miss_count / total_count) * 100);
    printf("Hit: %u\n", hit_count);
		printf("Hit rate: %.2f%%\n", ((float)hit_count / total_count) * 100);
		printf("offset = %d, index = %d, way = %d\n", M, G, W);

	return 0;
}
	
