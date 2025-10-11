# Makefile for compiling C programs with CS50 library

SRC := $(wildcard *.c)
BIN := $(SRC:.c=)

CC := gcc
LIBS := -lcs50

all: $(BIN)

%: %.c
	$(CC) $< $(LIBS) -o $@

clean:
	rm -f $(BIN)