#include "main.h"
/**
 * cap_string - capitilize each/first char of a word
 *
 * @str: the string input
 *
 * Return: str which is the modified string
 */
char *cap_string(char *str)
{
	int i, j;
	char c[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 32, 9, 10};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}

	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] == str[i] && (str[i + 1] >= 97 && str[i + 1] <= 122))
		{
			str[i + 1] = str[i + 1] - 32;
		}
	}

	return (str);
}
