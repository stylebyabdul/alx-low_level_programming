#include "main.h"

/**
 * rev_array - content of an array of integer to be reverse.
 * @a: integer of array
 * @n: The number of element of the array
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
