#include "main.h"

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 * Return: return 0 if s1 == s2
 *         return + if s1 > s2
 *         return - if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (i)
	{
		if (s1(i) == '\0' && s2(i) == '\0')
			break;
		else if (s1(i) == '\0')
		{
			diff = s2(i);
			break;
		}
		else if (s2(i) == '\0')
		{
			diff = s1(i);
			break;
		}
		else if (s1(i) != s2(1))
		{
			diff = s1(i) - s2(i);
			break;
		}
		else
			i++;
	}
	return (diff);
}