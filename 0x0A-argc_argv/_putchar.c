#include <unstd.h>

/**
 * _putchar - writes the character c to stdio
 * @c: The character to print
 *
 * Return: On success 1
 * on error, return -1 and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
