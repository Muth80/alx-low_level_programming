#include "main.h"

int prime_number(int n);
int divisible(int a, int b);
int power(int x, int y);

/**
 * prime_number - checks if an integer is prime or not
 * @n: number to be checked
 * Return: 1 if prime, 0 otherwise
 */

int prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (divisible(n, 2) || divisible(n, 3))
		return (0);
	if (power(5, (n / 5)) > n)
		return (1);
	return (0);
}

/**
 * divisible - checks if a is divisible by b
 * @a: dividend
 * @b: divisor
 * Return: 1 if divisible, 0 otherwise
 */

int divisible(int a, int b)
{
	if (a % b == 0)
		return (1);
	return (0);
}

/**
 * power - calculates a to the power of b
 * @x: base
 * @y: exponent
 * Return: x to the power of y
 */

int power(int x, int y)
{
	int i, result = 1;

	for (i = 0; i < y; i++)
		result *= x;
	return (result);
}
