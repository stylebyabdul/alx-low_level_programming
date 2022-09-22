#include "main.h"

/**
 * print_number - Prints an integer.
 * only using the putchar function.
 * noarrays and pointers.
 * @n: The integer to be printed.
 * Return: Void.
 */
void print_number(int n)
{
	unsigned int num = n;
	
	if (n < 0)
	{
		_putchar('_');
		num = -n;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
