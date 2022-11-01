#include "main.h"
/**
 * _strchr - locates a string in a character
 * @s: the string to be searched
 * @c: the character to be located
 * Return: If c is found - a pointer to the first occurance
 *        If c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ('\0');

}
