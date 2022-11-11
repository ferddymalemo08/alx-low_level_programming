#include "main.h"

int find_strlen(char *s)
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int find_strlen(char *s)
{
	 int len = 0;

	 if (*(s + len))
	{
		len++;
	 	len += find_strlen(s + len)

	}

	 return (len);

}

/**
 * check_palindrome -  checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int len, int index)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		
}
