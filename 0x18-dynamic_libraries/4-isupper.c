#include "main.h"

/**
 * _isupper - checks if the character is upper
 * @c: Variable text
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
