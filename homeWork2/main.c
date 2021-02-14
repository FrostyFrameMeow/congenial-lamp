#include <stdio.h>
#include <stdlib.h>
#include "float_array.h"

int main() {
	farray f1;
	mallocate(&f1, 10);
	
	int i;
	
	printf("\n\tintialize f1\n");
	for(i = 0; i < 10; i++) {
		set_value(&f1, i, i);
	}
	print_farray(&f1);
	
	printf("\n\tend of f1\n\n");
	
	printf("\n\tintialize f2\n");	
	farray f2;
	callocate(&f2, 5);
	print_farray(&f2);

	set_value(&f2, 3, access_value(&f1, 6));
	set_value(&f2, 1, access_value(&f1, 3));
	print_farray(&f2);
	
	printf("\n\tend of f2\n");
	printf("\n.................\n");
	free_farray(&f1);
	free_farray(&f2);
	return 0;
}
