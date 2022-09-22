#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that print all numbers from 0-9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	_putchar('\n');
}
