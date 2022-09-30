#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 *           src to memory area dest.
 * @src: copy of number to memory area
 * @n: the number to be copy to memory area
 * @dest: Area the memory is to be copy.
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
