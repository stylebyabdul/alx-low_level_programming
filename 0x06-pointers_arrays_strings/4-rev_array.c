#include "main.h"

/**
 * reverse_array - reverses the content of
 *                 an array of integer.
 * @a: array of integer to be reverse.
 * @n: The number of element of the array.
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
