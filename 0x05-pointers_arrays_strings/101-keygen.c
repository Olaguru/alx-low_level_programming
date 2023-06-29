#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - generate a random password
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char c;

	srand(time(NULL));
	
	for (i = 0; i <= 2654; i++)
	{
		c = rand() % 128;
		i += c;
		printf("%c", c);
	}
	printf("%c", 2772 - i);

	return (0);
}
