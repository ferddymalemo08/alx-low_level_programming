#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of the of memory to be filled
 * * @b: the desired value
 * @n: the number of bites to be changed
 * Return: Changed array with new value for a bite
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;

		n--;
	}

	return (s);
}
