ORIGIN_PATH := ../../../project/user
INC_PATH := $(shell find . ../musicbox $(ORIGIN_PATH) $(ORIGIN_PATH)/../musicbox -maxdepth 3 -type d)
SRC_PATH := $(shell find . ../musicbox $(ORIGIN_PATH) $(ORIGIN_PATH)/../musicbox -maxdepth 3 -type d)
SOURCES := $(foreach dir, $(SRC_PATH), $(wildcard $(dir)/*.c))
OBJ_PATH := ../obj
OBJS := $(patsubst %.c, $(OBJ_PATH)/%.o, $(notdir $(SOURCES)))
OUTPUT_PATH := ../bin
OUTPUT_BIN_NAME := dev_tool

CC := gcc
CFLAG := -Wall -MMD
LDFLAG :=

MOCK_DEFINE := 'DEV_PRINT=printf("%s:%s ", __FILE__, __LINE__); printf'

DEV_TOOL_MOCK_FUNC := main
OLED_MOCK_FUNC := oled_show_text oled_show_picture
AUDIO_CORE_MOCK_FUNC := audio_general_action
WIFI_MOCK_FUNC := wifi_connect wifi_disconnect

$(shell mkdir -p $(OUTPUT_PATH))

.PHONY: clean

$(OBJS):
	$(CC) $(CFLAG) $(addprefix -D,$(MOCK_DEFINE)) $(addprefix -I,$(INC_PATH)) -o $@ $(subst .o,.c,$(notdir $(SOURCES)))

$(OUTPUT_PATH)/$(OUTPUT_BIN_NAME):
	objcpy $(OBJ_PATH)/dev_tool.o $(DEV_TOOL_MOCK_FUNC) $(OBJ_PATH)/dev_tool.o
	objcpy $(OBJ_PATH)/oled.o $(OLED_MOCK_FUNC) $(OBJ_PATH)/oled.o
	objcpy $(OBJ_PATH)/audio_core.o $(AUDIO_CORE_MOCK_FUNC) $(OBJ_PATH)/audio_core.o
	objcpy $(OBJ_PATH)/wifi.o $(WIFI_MOCK_FUNC) $(OBJ_PATH)/wifi.o
	$(CC) $(LDFLAG) $(OBJS) -o $(OUTPUT_PATH)/$(OUTPUT_BIN_NAME)

clean:
	rm -rf $(OBJ_PATH)
	rm -rf $(OUTPUT_PATH)