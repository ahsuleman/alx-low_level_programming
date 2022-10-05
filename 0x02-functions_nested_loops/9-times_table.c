#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, tens, ones, product;

	for (row = 0; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			tens = product / 10;
			ones = product % 10;
			if (product > 9)
			{
				_putchar(',');
				_putchar(32);
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
			else if (column == 0)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(32);
				_putchar(32);
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
