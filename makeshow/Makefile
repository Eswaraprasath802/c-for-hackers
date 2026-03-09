CC=gcc
CFLAG=-g
BUILD_DIR=build
SRC_DIR=src
OBJECT = invisible.o laser.o main.o mind.o superman.o teleport.o xray.o

all:$(OBJECT)
		 cd $(BUILD_DIR) && $(CC) $^ -o superpower

$(OBJECT):%.o:$(SRC_DIR)/%.c
		$(CC) -c $^ -o $(BUILD_DIR)/$@


make clean:
		rm build/*