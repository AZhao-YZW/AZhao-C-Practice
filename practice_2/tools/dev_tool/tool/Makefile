ORIGIN_PATH := ../../../project/user
INC_PATH := $(shell find . ../musicbox $(ORIGIN_PATH) $(ORIGIN_PATH)/../musicbox -maxdepth 3 -type d)
SRC_PATH := $(shell find . ../musicbox $(ORIGIN_PATH) $(ORIGIN_PATH)/../musicbox -maxdepth 3 -type d)
SOURCES := $(foreach dir, $(SRC_PATH), $(wildcard $(dir)/*.c))
OBJ_PATH := ../obj
OBJS := $(patsubst %.c, $(OBJ_PATH)/%.o, $(notdir $(SOURCES)))
OUTPUT_PATH := ../bin
OUTPUT_BIN_NAME := dev_tool
TARGET := $(OUTPUT_PATH)/$(OUTPUT_BIN_NAME)

CC := gcc
CFLAG := -Wall -MMD
LDFLAG :=

MOCK_DEFINE := 'DEV_PRINT=printf("[%s:%s:%d]",__FILE__,__FUNCTION__,__LINE__);printf'

DEV_TOOL_MOCK_FUNC := -W main
OLED_MOCK_FUNC := -W oled_show_text -W oled_show_picture
AUDIO_CORE_MOCK_FUNC := -W audio_general_action
WIFI_MOCK_FUNC := -W wifi_connect -W wifi_disconnect

$(shell mkdir -p $(OBJ_PATH))
$(shell mkdir -p $(OUTPUT_PATH))

$(TARGET): $(SOURCES)
	for src in $(SOURCES); do \
	tmp=`basename $$src`;\
	obj=$(OBJ_PATH)/`echo $$tmp |sed "s/\.c/.o/"`;\
	$(CC) $(addprefix -D,$(MOCK_DEFINE)) $(addprefix -I,$(INC_PATH)) -c $(CFLAG) $$src -o $$obj;\
	done
	objcopy $(OBJ_PATH)/dev_tool.o $(DEV_TOOL_MOCK_FUNC) $(OBJ_PATH)/dev_tool.o
	objcopy $(OBJ_PATH)/oled.o $(OLED_MOCK_FUNC) $(OBJ_PATH)/oled.o
	objcopy $(OBJ_PATH)/audio_core.o $(AUDIO_CORE_MOCK_FUNC) $(OBJ_PATH)/audio_core.o
	objcopy $(OBJ_PATH)/wifi.o $(WIFI_MOCK_FUNC) $(OBJ_PATH)/wifi.o
	$(CC) $(LDFLAG) $(OBJS) -o $@

.PHONY: clean
clean:
	rm -rf $(OBJ_PATH)
	rm -rf $(OUTPUT_PATH)