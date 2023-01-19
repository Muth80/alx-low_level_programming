#include <stdio.h>

/**
 * main - prints the name of the file program was compiled from
 * _FILE_ -macro is used to print the current file name
 * Return: Always 0
 */

int main(void)
{
	printf("%s\n", _FILE_);
	return 0;
}
