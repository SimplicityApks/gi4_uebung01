CC = gcc

.PHONY: all default clean

default: all

all: myecho myenv myexec isset

isset: isset.c

myecho: myecho.c

myenv: myenv.c

myexec: myexec.c

clean:
	rm -f isset myecho myenv myexec
