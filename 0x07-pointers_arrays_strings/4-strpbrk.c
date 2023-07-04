#include "main.h"
/**
 * _strpbrk - the main function search strings for set of byte
 *
 * @s: string 1
 * @accept: string 2
 *
 * Return: pointer to byte
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	for (; *s != '\0'; s++)
	{
		temp = accept;
		for (; *temp != '\0'; temp++)
		{
			if (*s == *temp)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
