#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c on the stdout
 * @c: the character to print
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
