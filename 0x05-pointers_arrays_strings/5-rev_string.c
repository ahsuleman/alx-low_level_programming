#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: The string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char letter;

	for (i = 0; i < len / 2; i++)
	{
		letter = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = letter;
	}
}
