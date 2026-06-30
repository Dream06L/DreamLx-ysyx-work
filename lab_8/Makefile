
TOPNAME = top#定义变量,verilog顶层模块的名称
NXDC_FILES = constr/top.nxdc#定义一个变量，说明约束文件是constr下面的top.nxdc
INC_PATH ?= #如果没通过环境变量或者命令行来定义inc_path是什么，那它就是空  ?= 是条件赋值

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc  \
				-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build#编译输出的目录
OBJ_DIR = $(BUILD_DIR)/obj_dir#也就是.build/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)#最终可执行文件的路径是./build/top

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))#执行shell命令mkdir -p $(BUILD_DIR)，确保构建目录存在
#-p会自动创建缺失的父目录，如果目录已经存在了，因为有-p，所以不会报错，而是静默跳过
# constraint（约束） file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)#$(abspath ...) 是 Makefile 函数，将相对路径转换为绝对路径
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
#$^是所有依赖文件列表，$@是表示目标文件名#这个脚本的作用是根据引脚约束文件自动生成 C++ 绑定代码。
# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")#VSRCS的值为在 ./vsrc 目录下（绝对路径）查找到的所有 .v 文件
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)#将自动生成的 auto_bind.cpp 追加到 CSRCS 变量中

# rules for NVBoard
include $(NVBOARD_HOME)/scripts/nvboard.mk#包含 NVBoard 提供的 Makefile 片段

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))#
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""#-D 定义宏。

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: $(BIN)
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@$^

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run

include ../Makefile