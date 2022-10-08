#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 *
 * @n: The number of times the character \ will be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			for (i = 1; i <= n; i++)
			{
				if (i == j)
				{
					_putchar(92);
				}
				else if (i < j)
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
}
