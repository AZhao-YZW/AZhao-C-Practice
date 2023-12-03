ORIGIN_PATH := ../../../project/user
INC_PATH := $(shell find . ../musicbox $(ORIGIN_PATH) $(ORIGIN_PATH)/../musicbox -maxdepth 3 -type d)
SRC_PATH := $(shell find . ../musicbox $(ORIGIN_PATH) $(ORIGIN_PATH)/../musicbox -maxdepth 3 -type d)
SOURCES := $(foreach dir, $(SRC_PATH), $(wildcard $(dir)/*.c))
OBJ_PATH := ../obj
OBJS := $(patsubst %.c, $(OBJ_PATH)/%.o, $(notdir $(SOURCES)))
OUTPUT_PATH := ../bin
OUTPUT_BIN_NAME := dev_tool

CC := gcc
CFLAG := -Wall
LDFLAG :=

DEV_TOOL_MOCK_DEFINE := "printf=DEV_PRINT"
DEV_TOOL_MOCK_FUNC := main

all:
	mkdir -p $(OUTPUT_PATH)
	$(CC) $(CFLAG) $(addprefix -D,$(DEV_TOOL_MOCK_DEFINE)) $(addprefix -I,$(INC_PATH)) $(SOURCES) -o $(OBJS)
	objcpy $(OBJ_PATH)/dev_tool.o $(DEV_TOOL_MOCK_LIST) $(OBJ_PATH)/dev_tool.o
	$(CC) $(LDFLAG) $(OBJS) -o $(OUTPUT_PATH)/$(OUTPUT_BIN_NAME)

clean:
	rm -rf $(OUTPUT_PATH)