#include "main.h"
/**
 * _atoi - converts string to an int
 *
 * @s: input string
 *
 * Return: converted string to int
 */
int _atoi(char *s)
{
	int sign = 1;	/* x by -1 to get -ve and 1 for +ve */
	int result = 0;	/* help get the inremented result */
	int i = 0;	/* for the loop */
	/* get the sign before the number*/

	if (s[0] == '-')
	{
		sign = -1;
	}

	/* convert string to an int */
		for (i = 0; s[i] != '\0'; i++)
		{
			if (i == 0)
			{
				if (s[i] >= '0' && s[i] <= '9')
				result = s[i] - '0';
			}
			else if (i >= 1)
		{
			if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0');
		}
		}

	return (result * sign);
}
