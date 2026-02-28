SHELL=/bin/sh
ALT_SHELL=/bin/bash
CC := gcc
CFLAGS := -lm
objects := $(wildcard *.o)

main:main.c #without saying any thing it compile implicit

FULL_CMD_IMM := $(CC) -o $(BIN) $(OBJ) #it is like staring to ending process the variable created upto this is work
FULL_CMD_LAZY = $(CC) -o $(BIN) $(OBJ) #it is search all the variable to entire file and return

OBJ=main.o
BIN=main
CFILE=main.c

main:main.o
		$(CC) -o main main.o $(CFLAGS)

main.o:main.c
		$(CC) -c main.c

clean:
		rm main
		rm main.o

print:main
		echo $(FULL_CMD_IMM)
		echo $@ 
# 		atomatic variables
		echo $^
		echo $(FULL_CMD_LAZY)
		echo objects