#include <stdio.h>
/**
 * main - print its name, fllowed by a new line
 *
 * @argc: number of command line arguments.
 * @argv: array that contains the command line arg..
 *
 * Return: (0) when successful
 */
int main(int agrc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
