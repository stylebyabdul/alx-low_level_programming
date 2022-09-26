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
	unsigned int index;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (index = 0; index < n; index++)
		destination[index] = source[index];

	return (dest);
}
