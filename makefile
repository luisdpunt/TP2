SRC_DIR =./src
OUT_DIR =./build

OBJ_DIR =./obj
BIN_DIR =./bin
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)

all:
	echo $(SRC_FILES)