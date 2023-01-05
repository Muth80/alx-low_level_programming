#include "main.h"
/**
 * helperFunction - checks if sqrt of number exists
 * @num: number.
 * @pSqrt: possible sqrt of number
 * Return: sqrt of number of -1 for error.
 */

int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}


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

