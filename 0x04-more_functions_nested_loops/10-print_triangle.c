#include "main.h"

/**
 * print_triangle - Prints a triangle with #
 *
 * @size: The size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = size; column >= 1; column--)
			{
				if (row == column)
				{
					_putchar('#');
				}
				else if (row > column)
				{
					_putchar('#');
				}
				else if (row < column)
				{
					_putchar(32);
				}
			}
			_putchar('\n');
		}
	}
}
