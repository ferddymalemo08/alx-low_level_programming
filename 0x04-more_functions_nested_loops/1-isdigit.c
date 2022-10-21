#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: char to be checked
 * Return:Always 0 (success)
 */

int _isdigit(int c)
{
	int y = 0;

	if (c >= '0' && c <= '9')
		y = 1;
	return (y);
}
