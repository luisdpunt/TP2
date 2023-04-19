SRC_DIR =./src
OUT_DIR =./build
OBJ_DIR =./obj
BIN_DIR =./bin
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c,$)

$(OUT_DIR):
	mkdir $(OUT_DIR)

$(OBJ_DIR): $(OUT_DIR)
	mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(OBJ_DIR) $(SRC_DIR)/%.c
	gcc -c $< -o $@
 
all:
	echo $(SRC_FILES)
	echo $(OBJ_FILES)