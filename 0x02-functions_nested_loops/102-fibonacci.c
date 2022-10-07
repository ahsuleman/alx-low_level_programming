#include <stdio.h>

/**
 * main - prints fibonacci numbers
 *
 * Description: A program that prints the first
 * 50 fibonacci numbers
 *
 * Return: void
 */

int main(void)
{
	int i;
	unsigned long long int a, b, c;

	a = 0;
	b = 1;
	for (i = 1; i <= 50; i++)
	{
		c = a + b;
		if (i == 50)
		{
			printf("%llu", c);
		}
		else
		{
			printf("%llu, ", c);
		}
		a = b;
		b = c;
	}
	return (0);
}
