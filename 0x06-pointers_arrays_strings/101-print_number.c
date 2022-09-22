#include "main.h"

/**
 * print_number - print an integer.
 * @n: number to be printed.
 * Return: Always 0
 */
void print_number(int n)
{
	int num = n;

	for (num = 0; num < 10; num++)
		_putchar((num % 10) + '0');

	putchar('\n');
	return (0);
}
