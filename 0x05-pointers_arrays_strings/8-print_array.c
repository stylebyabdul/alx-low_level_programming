#include <stdio.h>
#include "main.h"

/**
 * print array - prints n element of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;
		printf(" ,");
	}
	print("\n");
}
