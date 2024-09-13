//Leanne Narciso
//CSC341
//Lab 4
//
//
//
#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main(int agrc, char *argv[])
{
	int *values;
	int i;

	values = (int *)malloc(sizeof(int)*5);

	for(i = 0; i < 5; i++)
		values[i] = i;

	printf("argc adress %p", &argv);
	printf("\nstack address %p", &i);
	printf("\nheap address %p", &values);
	printf("\nuninitialized data %p", &x);
	printf("\ninitialized data %p", &y);

	return EXIT_SUCCESS;
}
