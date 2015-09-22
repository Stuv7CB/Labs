all: main.o function.o
	gcc -lm main.o function.o -o a
main.o:
	gcc -c main.c
function.o:
	gcc -c function.c
clean:
	rm -r -f *.o a
