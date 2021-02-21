all: dll_functions.o main.o
	gcc dll_functions.o main.o -o exam

dll_functions.o: dll_functions.c double_linked_list.h
	gcc -c dll_functions.c

main.o: main.c double_linked_list.h
	gcc -c main.c

clean:
	rem *.o
	re exam
