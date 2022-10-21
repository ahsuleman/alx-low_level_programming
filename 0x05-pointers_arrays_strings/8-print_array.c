#include "main.h"

/**
 * print_array - prints n elements of an array
 *
 * @a: the array
 * @n: number of elements to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	for (i = 1; i <= n - 1; i++)
	{
		printf(", %d", a[i]);
	}
}
