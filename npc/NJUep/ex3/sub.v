module sub(a, b, s, over);
    input [3:0] a, b;
    output [3:0] s;
    output over;

    assign s = a - b;
    assign over = (a[3] != b[3]) && (s[3] != a[3]);
    assign s = over ? 0 : s;
endmodule

