#include <stdio.h>

/**
 * main - prints the sum of fibonacci numbers
 *
 * Description: A program that prints the sum of
 * all fibonacci even numbers less than 4000000
 *
 * Return: void
 */

int main(void)
{
	int i, sum;
	unsigned long int a, b, c;

	a = 0;
	b = 1;
	sum = 0;
	for (i = 1; i <= 50; i++)
	{
		c = a + b;
		if ((c % 2) == 0)
		{
			sum = sum + c;
		}
		else if (c > 4000000)
		{
			i = 50;
		}
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
