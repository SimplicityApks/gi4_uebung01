CC = gcc

.PHONY: all default clean

default: all

all: myecho myenv

myecho: myecho.c

myenv: myenv.c

clean:
	rm -f myecho myenv
