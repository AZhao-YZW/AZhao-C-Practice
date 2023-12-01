INC_PATH := $(shell find . ../musicbox -maxdepth 3 -type d)
SRC_PATH := $(shell find . ../musicbox -maxdepth 3 -type d)
SOURCES := $(foreach dir, $(SRC_PATH), $(wildcard $(dir)/*.c))
OUTPUT_PATH := ../bin
OUTPUT_BIN_NAME := user_tool

all:
	mkdir -p $(OUTPUT_PATH)
	gcc -I $(INC_PATH) -o $(OUTPUT_PATH)/$(OUTPUT_BIN_NAME)

clean:
	rm -rf $(OUTPUT_PATH)