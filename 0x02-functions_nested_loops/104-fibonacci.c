#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	unsigned long int a, b, c;

	a = 0;
	b = 1;
	for (i = 1; i <= 98; i++)
	{
		c = a + b;
		if (i == 98)
		{
			printf("%g\n", c);
		}
		else
		{
			printf("%g, ", c);
		}
		a = b;
		b = c;
	}
	return (0);
}
