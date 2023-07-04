#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: string
 * @accept: prefix substring
 *
 * Return: number of byte to digital segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l, initial_length = 0;
	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (accept[j] != '\0')
	{
		j++;
	}

	for (k = 0; k < i; k++)
	{
		for (l = 0; l < (j - 2); l++)
		{
			if (accept[l] == s[k])
			{
				initial_length++;
				break;
			}
		}
	}
	return (initial_length);
}
