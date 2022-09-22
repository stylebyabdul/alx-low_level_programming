#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: the string to be encode.
 *
 * Return: A pointer to the encode string
 */
char *leet(char *str)
{
	int i, j;
	char a[] = "aAeEoOtTll";
	char b[] = "443300711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (string);
}
