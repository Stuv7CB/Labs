all: main.o gauss.o
	gcc -g main.o gauss.o -o a
main.o:
	gcc -g -c main.c
gauss.o:
	gcc -g -c gauss.c
clean:
	rm -r -f *.o a
