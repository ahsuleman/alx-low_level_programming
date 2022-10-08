#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, count;

	for (count = 0; count <= 9; count++)
	{
		for (i = 0; i <= 1; i++)
		{
			j = 0;
			while (j <= 9)
			{
				if (i > 0)
				{
					_putchar(i + 48);
				}
				_putchar(j + 48);
				if (i == 1 && j == 4)
				{
					j = 9;
				}
				j++;
			}
		}
		putchar('\n');
	}
}
