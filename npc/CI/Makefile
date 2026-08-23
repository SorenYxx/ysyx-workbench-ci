SIMULATOR = iverilog
SIMFILE = sim.vvp
VFLAGS = $(shell find ./ -name "*.v")
DUMP = wave.fst
FILE = rtt

bin2hex: $(FILE).bin
	@python3 bin2hex.py $< $(FILE).hex
	
compile: bin2hex
	$(SIMULATOR) -o $(SIMFILE) $(VFLAGS)

run: clean compile
	vvp $(SIMFILE)

vcd2fst:
	@vcd2fst wave.vcd $(DUMP)

wave: vcd2fst
	gtkwave $(DUMP)

clean:
	rm -f $(SIMFILE) $(DUMP) $(FILE).hex
