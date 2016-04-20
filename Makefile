CC = gcc

.PHONY: all default clean

default: all

all: myecho myenv isset

myecho: myecho.c

myenv: myenv.c

isset: isset.c

clean:
	rm -f myecho myenv isset
