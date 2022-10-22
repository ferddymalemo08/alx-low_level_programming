#include "main.h"

/**
 * print_triangle - print a triangle
 * @n: size of the triangle
 */

void print_triangle(int n)
{
	int h, tri;

	if (n < 0)
	{
		for (h = 1; h <= n; n++)
		{
			for (tri = n - h; tri <= n; tri--)

				_putchar(' ');

			for (tri = 0; tri < n; tri++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}
}
