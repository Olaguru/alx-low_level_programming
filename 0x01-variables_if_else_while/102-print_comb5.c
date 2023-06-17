#include <stdio.h>
/**
 * main - prints 4 digits separated by space and comma
 *
 * Return: (0)
 *
 */
int main(void)
{
	int num1, num2, num3, num4;

	num1, num2, num3, num4 = 0;

	while (num1 <= '9')
	{
		while (num2 <= '9')
		{
			while (num3 <= '9')
			{
				while (num4 <= '9')
				{
					if (((num3 + num4) > (num1 + num2) && num3 >= num1) || num1 < num3)
					{
						putchar(num1);
						putchar(num2);
						putchar(' ');
						putchar(num3);
						putchar(num4);

				if (num1 + num2 + num3 + num4 == '179' && num1 == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
				num3++;
			}

			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
