#include <stdio.h>

/**
 * main - Print all single digit numbers of base 1o starting from 0,
 * using putchar without char variable.
 *
 * Result: Always 0.
 */
int main(void)
{
	int num;

	for ( num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
