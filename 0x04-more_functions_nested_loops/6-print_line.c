#include "main.h"

/**
 * print_line - prints strainght line using '_'
 * @n: the number of '_' to be printed
 * Return: Always .
 */

void print_line(int n)
{
	int len;

	if (len < 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
