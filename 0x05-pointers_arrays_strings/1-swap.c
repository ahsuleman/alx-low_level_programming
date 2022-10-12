#include "main.h"

/**
 * swap_int - It swaps the values of two integers
 *
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
