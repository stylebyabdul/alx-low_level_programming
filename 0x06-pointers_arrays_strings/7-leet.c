#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: the string to be encode.
 *
 * Return: A pointer to the encode string
 */
char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[inx1])
	{
		for (indx2 = 0; indx2 <= 7; indx++)
		{
			if (str[indx1] == leet[indx2] ||
					str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);
}
