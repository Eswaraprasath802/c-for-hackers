CC=gcc
CFLAG=-g
BUILD_DIR=build
SRC_DIR=src
OBJECT = invisible.o laser.o main.o mind.o superman.o teleport.o xray.o

all:$(OBJECT)
		 cd $(BUILD_DIR) && $(CC) $^ -o superpower

invisible.o:$(SRC_DIR)/invisible.c
		$(CC) -c $^ -o $(BUILD_DIR)/$@

laser.o:$(SRC_DIR)/laser.c
		$(CC) -c $^ -o $(BUILD_DIR)/$@

main.o:$(SRC_DIR)/main.c
		$(CC) -c $^ -o $(BUILD_DIR)/$@

mind.o:$(SRC_DIR)/mind.c
		$(CC) -c $^ -o $(BUILD_DIR)/$@

superman.o:$(SRC_DIR)/superman.c
		$(CC) -c $^ -o $(BUILD_DIR)/$@

teleport.o:$(SRC_DIR)/teleport.c
		$(CC) -c $^ -o $(BUILD_DIR)/$@

xray.o:$(SRC_DIR)/xray.c
		$(CC) -c $^ -o $(BUILD_DIR)/$@
