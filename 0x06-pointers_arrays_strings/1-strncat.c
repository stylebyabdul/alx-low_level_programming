#include "main.h"

/**
 * strncat - concatenate the string that are point by src
 *           src does not need to null-terminated if it 
 *           contain n or more bytes.
 * @src: the string concatenated upon
 * @dest: string to be appended to src
 * Return: pointer to destinatination string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
