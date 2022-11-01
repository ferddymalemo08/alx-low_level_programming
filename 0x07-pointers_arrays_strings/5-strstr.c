#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: If the substring is to belocated - a pointer at the beggining
 * at the located substring
 * If the substring is not loceted - NULL
 *
 */

char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index] + 1 == '\0')
					return (haystack);
				index++;

			} while (haystack[index] == needle[index]);
		}

		haystack++;
	}

	return ('\0');

}
