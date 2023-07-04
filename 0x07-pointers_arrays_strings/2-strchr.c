#include "main.h"
#include <stddef.h>
/**
 * _strchr - a function that locates a character in a string
 *
 * @s: string
 * @c: character to look for
 *
 * Return: a pointer to first occurenec of char 'c'
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
