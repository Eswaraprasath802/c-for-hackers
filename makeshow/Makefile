SHELL=/bin/sh
ALT_SHELL=/bin/bash
cc := gcc
CFLAGS := -lm

FULL_CMD_IMM := $(cc) -o $(BIN) $(OBJ)
FULL_CMD_LAZY = $(cc) -o $(BIN) $(OBJ)

OBJ=main.o
BIN=main
CFILE=main.c


main:main.o
		$(cc) -o main main.o $(CFLAGS)

main.o:main.c
		$(cc) -c main.c

clean:
		rm main
		rm main.o

print:
		echo $(FULL_CMD_IMM)
		echo $(FULL_CMD_LAZY)