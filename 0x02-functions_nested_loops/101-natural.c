#include <stdio.h>

/**
 * main - Prints the sum of multiples
 *
 * Description: A program that prints the sum
 * of multiples of 3 or 5 among natural numbers
 * below 1024
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;
	int number;
	int multiple_of_3;
	int multiple_of_5;

	i = 0;
	for (number = 1023; number > 0; number--)
	{
		multiple_of_3 = number % 3;
		multiple_of_5 = number % 5;

		if (multiple_of_3 == 0 || multiple_of_5 == 0)
		{
			i = i + number;
		}
	}
	printf("The sum of these multiples is %d\n", i);
	return (0);
}
