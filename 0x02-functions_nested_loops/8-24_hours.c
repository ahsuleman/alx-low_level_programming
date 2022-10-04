#include "main.h"

/**
 * jack_bauer3 - prints every minute of the day
 *
 * Description: A program that prints every
 * minute of the day of Jack Bauer
 *
 * Return: Always void
 */

void jack_bauer(void)
{
	int i, j, k, m;

	i = 48;

	while (i < 58)
	{
		j = 48;

		while (j < 58)
		{
			k = 48;
			m = 48;

			while (k < 54)
			{
				while (m < 58)
				{
					putchar(i);
					putchar(j);
					putchar(58);
					putchar(k);
					putchar(m);
					putchar('\n');
					if (i == 50 && j == 51 && k == 53 && m == 57)
					{
						m = 57;
						k = 53;
						j = 57;
						i = 57;
					}
					m++;
				}
				m = 48;
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}
