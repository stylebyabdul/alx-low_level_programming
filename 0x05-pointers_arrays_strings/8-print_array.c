#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an inpute number of  element
 *               in an array
 * @a: array of integer
 * @n: number of elements to be printed
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
		printf(", ");
	}
	printf("\n");
}
