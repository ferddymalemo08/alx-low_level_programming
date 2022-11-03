#include "main.h"

int is_divisible(int num, int div);
int is_prime_number(int n);

/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: If the number is divisible - 0.
 * If the number is not divisible - 1.
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - checks if an integer is prime number
 * @n: Number to check.
 * Return: 1 if number is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_divisible(n, n - 1));
}
