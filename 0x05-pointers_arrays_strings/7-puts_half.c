#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int i;
	int half = len / 2;
	int n = (len - 1) / 2;

	if (len % 2 != 0)
	{
		for (i = len - n; i <= len - 1; i++)
		{
			printf("%c", str[i]);
		}
	}
	else
	{
		for (i = half; i <= len - 1; i++)
		{
			printf("%c", str[i]);
		}
	}
	printf("\n");
}
