#include <stdio.h>

/**
 * main - prints numbers from 1 to 100
 *
 * Description: A multiple of three is printed as Fizz and
 * a multiple of five is printed as Buzz. A multiple of
 * both three and five is printed as FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int number;

	printf("%d", 1);
	for (number = 2; number <= 100; number++)
	{
		if (number % 3 == 0)
		{
			printf(" Fizz");
			if (number % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else if (number % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", number);
		}
	}
	printf("\n");
	return (0);
}
