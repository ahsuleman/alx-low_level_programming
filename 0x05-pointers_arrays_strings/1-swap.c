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
	int *p, *q;

	p = a;
	q = b;

	*p = 42;
	*q = 98;
}
