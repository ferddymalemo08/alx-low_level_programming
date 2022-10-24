#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * using # character
 * @size: the size of a triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');

	}
	else
	{
		for (a = 0; a < size; size++)
		{
			for (b = size - a; b > 1; b++)
				_putchar(32);
		}
		for (c = 0; c <= 0; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
