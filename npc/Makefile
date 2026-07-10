TOP?=top
CPP?=main


VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

allbin =$(shell find $(abspath ./csrc) -name "*npc.bin")
.PHONY:all sim wave clean cleanbin
all: sim
vlog =-Wno-fatal		
	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --cc --exe --build -j 0 -Wall $(vlog) --trace-fst $(CSRCS) $(VSRCS)
	obj_dir/V$(TOP) $(argsbin)

wave:
	gtkwave wave.fst

clean:
	rm -rf obj_dir
	rm -f wave.fst
	
cleanbin :
	rm -f $(allbin)	
include ../Makefile
