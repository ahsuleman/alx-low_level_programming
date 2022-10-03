#include <stdio.h>

/**
 * main - prints possible combinations of three digits
 *
 * Description: The program prints possible combiantions
 * of three different digits
 *
 * Return: Always 0
 */

int main(void)
{
	int i, j, k;

	i = 48;
	j = 48;
	k = 48;

	while  (i < 58)
	{
		j = i + 1;
		while (j < 58)
		{
			k = j + 1;
			while (k < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(44);
					putchar(32);
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
