#include "main.h"

/**
 * print_line - Prints a line
 *
 * Description: A program that prints the character _
 * a number of times
 * @n: The number of times the character _ will be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
