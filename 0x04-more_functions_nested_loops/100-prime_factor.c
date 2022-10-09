#include <stdio.h>

/**
 * main - prints prime factors of 612852475143
 *
 * Return: Always 0
 */

int main(void)
{
	long int number = 612852475143;
	long int prime_factor;

	for (prime_factor = 2; prime_factor <= number; prime_factor++)
	{
		if (number % prime_factor == 0)
		{
			number = number / prime_factor;
			if (number == 1)
			{
				printf("%llu\n", prime_factor);
			}
			else
			{
				prime_factor = 1;
			}
		}
	}
	return (0);
}
