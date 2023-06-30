#include "main.h"
/**
 * _strncat - a function that concertenate two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: no of element to concertenate from src
 * Return: dest + n of src
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;
	int len_src = n;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}

	for (i = 0; i < len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}

	return (dest);
}
