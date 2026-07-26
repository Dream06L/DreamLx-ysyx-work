TOP?=top
CPP?=main


VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
IMG ?=
vlog = -Wno-style #-Wno-fatal	
vfastlog= #-O3 --x-assign fast --x-initial fast
vfst=--trace-fst
#allbin =$(shell find $(abspath ./csrc) -name "*npc.bin")
.PHONY:all sim wave clean cleanbin
all: sim
	
	
sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	verilator --cc --exe --build -j 0 $(vfastlog) -Wall $(vlog) $(vfst) $(CSRCS) $(VSRCS)
	obj_dir/V$(TOP) $(IMG)

wave:
	gtkwave wave.fst

clean:
	rm -rf obj_dir
	rm -f wave.fst
	
cleanbin :
	rm -f $(allbin)	
include ../Makefile
