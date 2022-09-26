#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string to be search
 * @c: character to be located to string
 * Return: a pointer the character c in string s or null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + 1) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
