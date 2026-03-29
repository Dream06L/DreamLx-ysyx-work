TOP?=top
CPP?=sim_main
verilog_FILE=vsrc/$(TOP).v
cpp_FILE=csrc/$(CPP).cpp

.PHONY:all sim wave clean
all: 
	
	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --cc --exe --build -j 0 -Wall --trace-fst $(cpp_FILE) $(verilog_FILE)
	obj_dir/V$(TOP)

wave:
	gtkwave wave.fst

clean:
	rm -rf obj_dir
	rm wave.fst

include ../Makefile
