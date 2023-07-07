#include "main.h"
/**
 * _strlen - function that returns length of string
 *
 * @s: character of strings
 *
 * Return: (0)
 */
int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\0')
	{
	total_len++;
	}

	return (total_len);
}
