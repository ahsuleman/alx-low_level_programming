#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len, i;

	len = strlen(s);

	for (i = len-1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
