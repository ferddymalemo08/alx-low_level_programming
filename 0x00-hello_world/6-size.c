#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int integerType;

	float floatType;

	double doubleType;

	char charType;

	/*the sizeof operator is used to evaluate the size of the variable*/

	printf("The size of int: %1d bytes\n", sizeof(integerType));
	printf("The size of float: %1d bytes\n", sizeof(floatType));
	printf("The size of double: %1d bytes\n", sizeof(doubleType));
	printf("The size of char: %1d bytes\n", sizeof(doubleType));

	return (0);

}
