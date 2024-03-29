#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the characte c to stdout
 * @c: The character to print
 * Return: On succes 1.
 * On error, -1 is returned, and errno is
 * set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
