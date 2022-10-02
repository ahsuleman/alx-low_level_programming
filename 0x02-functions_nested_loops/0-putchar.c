#include "main.h"
/**
 * main - prints _putchar
 *
 * Description: a program that prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
