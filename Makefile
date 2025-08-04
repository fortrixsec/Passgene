# Simple Makefile to build the password generator

CC = gcc
CFLAGS = -Wall -O2
TARGET = passgene

all: $(TARGET)

$(TARGET): passwordgen.c
	$(CC) $(CFLAGS) passwordgen.c -o $(TARGET)

clean:
	rm -f $(TARGET)
