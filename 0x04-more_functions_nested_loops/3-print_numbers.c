#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints the numbers from 0-9.
 * Return: return nothing
 */
void print_numbers(void)
{
	int n;

	for (n= 0; n < 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
