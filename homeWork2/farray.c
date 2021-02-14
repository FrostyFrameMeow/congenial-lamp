#include <stdio.h>
#include <stdlib.h>
#include "float_array.h"

void mallocate(farray *array, int size) {
	array->data = (float *) malloc(size * sizeof(float));
	array->size = size;
}

void callocate(farray *array, int size) {
	array->data = (float *) calloc(size, sizeof(float));
	array->size = size;
}

int set_value(farray *array, int index, float value) {	
	int i;
	
	for(i = index; i < array->size; i++) {
		if(i < array->size) {
			*(array->data + i) = value;
			return value;
		}
		else {
			printf("Index is out of bounds!\n");
			return -2;
		}
	}
}

float access_value(farray *array, int index) {
	int i;
	
	for(i = index; i < array->size; i++) {
		if(i < array->size) {
			return *(array->data + i);
		}
		else {
			printf("Index is out of bounds!\n");
			return -1.0;
		}
	}
}

void print_farray(farray *array) {
	int i;

	for(i = 0; i < array->size; i++) {
		printf("[%.3lf] ", *(array->data + i));
	}
	printf("\n_________\n");
}

void free_farray(farray *array) {
	int i;
	
	for(i = 0; i < array->size; i++) {
		free(array->data + i);
	}
}

