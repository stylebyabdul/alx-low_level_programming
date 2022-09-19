#include "main.h"

/**
 * _strlen - return length of a string.
 * @str: the string to get the length of.
 *
 * Return: The length of @str.
 */
size_t strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
