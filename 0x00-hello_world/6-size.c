#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char charType;

	int intType;

	long int longintType;

	long long int longlongintType;
	float floatType;

	/*the sizeof operator is used to evaluate the size of the variable*/

	printf("Size of a char: %1d byte(s)\n", sizeof(charType));
	printf("Size of an int: %1d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %1d byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %1d byte(s)\n", sizeof(longlongintType));
	printf("Size of a float: %1d byte(s)\n", sizeof(floatType));

	return (0);

}
