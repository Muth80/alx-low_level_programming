#include "main.h"

/**
 * is_divisible - Checks if a number is divisible
 * @num: The number to be checked.
 * @div: The divisor
 * @n: The function will check if the integer is a prime number
 * and will return 0 if it is not, or 1 if it is
 * Return: If the number is divisble - 0.
 * If the number is not divisible -1.
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		_putchar(0 + '0');
		return (0);
	}

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			_putchar(0 + '0');
			return (0);
		}
	}

	_putchar(1 + '0');
	return (1);
}

