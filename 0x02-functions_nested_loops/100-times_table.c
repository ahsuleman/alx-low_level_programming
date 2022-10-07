#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints timetable
 * @n: The integer whose timetable will be printed
 *
 * Description: A program that prints the timetable
 * of a number not more than 15 or less than 0
 *
 * Return: Always void
 */

void print_times_table(int n)
{
	int i, j;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j == 0)
				{
					printf("%d", 0);
				}
				else if (product > 9 && product <= 99)
				{
					printf(",");
					printf("  ");
					printf("%d", product);
				}
				else if (product > 99 && product <= 999)
				{
					printf(",");
					printf(" ");
					printf("%d", product);
				}
				else
				{
					printf(",");
					printf("   ");
					printf("%d", product);
				}
			}
			printf("\n");
		}
	}
}
