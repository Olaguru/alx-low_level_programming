#include "main.h"
/**
 * _strstr - function finds the first occurrence of a
 * substring in a string
 * @needle: substring
 * @haystack: string
 *
 * Return: char pointer to haystack from the subset found
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
