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

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}

	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}


	return (dest);
}
