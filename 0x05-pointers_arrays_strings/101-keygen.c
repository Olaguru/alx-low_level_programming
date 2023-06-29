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
	
	for (i = 0; i <= 3000; i++)
	{
		c = rand() % 128;
		printf("%c", c);
	}

	return (0);
}
