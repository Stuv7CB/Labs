all: 1.o help.o gauss.o
	gcc -g 1.o help.o gauss.o -o a
1.o:
	gcc -g -c 1.c
help.o:
	gcc -g -c help.c
gauss.o:
	gcc -g -c gauss.c
clean:
	rm -r -f *.o a
