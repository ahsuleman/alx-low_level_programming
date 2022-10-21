#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: the string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
}
