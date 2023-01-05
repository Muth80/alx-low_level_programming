#include "main.h"

/**
 * _evaluate - evaluate function sqrt
 * @i: interger
 * @n: interger
 * Return: evaluate sqrt
 */

int _sqrt_recursion(int n);
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}

