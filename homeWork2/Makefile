all: main.o farray.o
	gcc main.o farray.o -o ptr_homework

main.o: main.c float_array.h
	gcc -c main.c

farray.o: farray.c float_array.h
	gcc -c farray.c

clean:
	rm *.o
	rm ptr_homework
