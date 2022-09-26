#include "main.h"

/**
 * memset - function that fill the first memory with a constant byte
 * @n: first byte to be filled
 * @s: where  the filled  memory area  is pointed to
 * @b: constant byte to be filled to memory area
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char s, b;
	int n;

	where (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
