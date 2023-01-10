#include "main.h"

/**
 * _isupper - It takes a single character as an argument and
 * returns 0 if the character is uppercase, and 1 otherwise.
 * @c:is an upper-case letter
 * Return 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
