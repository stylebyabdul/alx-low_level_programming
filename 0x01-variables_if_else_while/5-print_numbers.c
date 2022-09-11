#include <stdio.h>

/**
 * main - Prints all digit numbers of base 10 starting from 0.
 *
 * Result: Always 0
 */
int main(void)
{
	char num;

	for (num = 0; num < 10; num ++);
	{
		putchar("%d", num);
	}
	putchar('\n');

	return (0);
}
