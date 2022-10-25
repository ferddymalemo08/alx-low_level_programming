#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer and updates it
 * @n: the value the pointer takes
 *
 * Return: Always 0 (success)
 */

void set_to_98(int *n)
{
	int var;

	var = 98;
	n = &var;

	printf("value of 'var': %d\n", var);
	printf("address of 'var': %p\n", &var);
	printf("value of n: %p\n ", n);
}
