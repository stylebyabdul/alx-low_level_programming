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
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
