#include "main.h"

/**
 * _strlen - return length of a string.
 * @str: the string to get the length of.
 *
 * Return: return length as integer;
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
