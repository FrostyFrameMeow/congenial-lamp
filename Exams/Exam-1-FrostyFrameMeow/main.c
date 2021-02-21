#include <stdio.h>
#include "double_linked_list.h"

int main() {
	
	DoubleLinkedList a1 = {NULL, 4, NULL};
	DoubleLinkedList a2 = {NULL, 2, NULL};
	DoubleLinkedList a3 = {NULL, 5, NULL};
	DoubleLinkedList a4 = {NULL, 8, NULL};
	DoubleLinkedList a5 = {NULL, 3, NULL};
	
	// Connecting the first linked list
	a1.next = &a2;
	
	a2.prev = &a1;
	a2.next = &a3;
	
	a3.prev = &a2;
	a3.next = &a4;
	
	a4.prev = &a3;
	a4.next = &a5;
	
	a5.prev = &a4;
	
	// Declaring second linked list
	DoubleLinkedList b1 = {NULL, 3, NULL};
	DoubleLinkedList b2 = {NULL, 8, NULL};
	DoubleLinkedList b3 = {NULL, 6, NULL};
	DoubleLinkedList b4 = {NULL, 4, NULL};
	DoubleLinkedList b5 = {NULL, 7, NULL};
	
	// Connecting the second linked list
	b1.next = &b2;
	
	b2.prev = &b1;
	b2.next = &b3;
	
	b3.prev = &b2;
	b3.next = &b4;
	
	b4.prev = &b3;
	b4.next = &b5;
	
	b5.prev = &b4;
	
	// Printing first linked list
	printf("First linked list:\n");
	print_forward(&a1);
	
	// Printing second linked list
	printf("Second linked list:\n");
	print_forward(&b1);
	
	printf("\n");
	
	// Printing mean of first linked list
	const float a_mean = linked_mean(&a1);
	printf("Mean of first linked list: %.2f\n", a_mean);
	
	// Printing mean of second linked list
	const float b_mean = linked_mean(&b1);
	printf("Mean of second linked list: %.2f\n", b_mean);
	
	printf("\n");
	
	// Printing variance of first linked list
	const float a_var = linked_variance(&a1, a_mean);
	printf("Variance of first linked list: %.2f\n", a_var);
	
	//Printing variance of second linked list
	const float b_var = linked_variance(&b1, b_mean);
	printf("Variance of second linked list: %.2f\n", b_var);
	
	printf("\n");
	
	// Finding the minimum of a linked list
	const float a_min = linked_min(&a1);
	const float b_min = linked_min(&b1);
	
	printf("Minimum values for linked lists a and b:\n");
	printf("a_min: %lf, b_min: %lf\n", a_min, b_min);
	
	// Getting the size of each lined list
	int a_size = linked_size(&a1);
	
	DoubleLinkedList b6 = {&b5, 9, NULL};
	b5.next = &b6;
	DoubleLinkedList b7 = {&b6, 1, NULL};
	b6.next = &b7;
	
	int b_size = linked_size(&b1);
	
	printf("a_size: %d, b_size: %d\n\n", a_size, b_size);
	
	// Third experiment
	DoubleLinkedList c1 = {NULL, -4, NULL};
	DoubleLinkedList c2 = {NULL, 9, NULL};
	DoubleLinkedList c3 = {NULL, 5, NULL};
	DoubleLinkedList c4 = {NULL, -1, NULL};
       	DoubleLinkedList c5 = {NULL, 8, NULL};
	DoubleLinkedList c6 = {NULL, -7, NULL};
	DoubleLinkedList c7 = {NULL, 12, NULL};
	DoubleLinkedList c8 = {NULL, -2, NULL};	
	
	add_node(&c1, &c2);
	add_node(&c2, &c3);
	add_node(&c3, &c4);
	add_node(&c4, &c5);
	add_node(&c5, &c6);
	add_node(&c6, &c7);
	add_node(&c7, &c8);
	
	// Printing third linked list
	printf("Third linked list:\n");
	print_forward(&c1);
	
	printf("\n");
	
	// Printing mean of third linked list
	const float c_mean = linked_mean(&c1);
	printf("Mean of third linked list: %.2f\n", c_mean);
	
	// Printing variance of first linked list
	const float c_var = linked_variance(&c1, c_mean);
	printf("Variance of third linked list: %.2f\n", c_var);
	
	// Finding the minimum of the third linked list
	const int c_min = linked_min(&c1);
	printf("Minimum values for the third linked lists: %d\n", c_min);
	
	// Finding the size of the third linked list
	const int c_size = linked_size(&c1);
	printf("Size of third linked list: %d\n", c_size);
	
	return 0;
}
