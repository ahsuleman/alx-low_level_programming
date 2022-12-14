#include <stdio.h>

/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int prime_factor;

	for (prime_factor = 2; prime_factor <= number; prime_factor++)
	{
		if (number % prime_factor == 0)
		{
			number = number / prime_factor;
			if (number == 1)
			{
				printf("%lu\n", prime_factor);
			}
			else
			{
				prime_factor = 1;
			}
		}
	}
	return (0);
}
