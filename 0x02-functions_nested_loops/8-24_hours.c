#include "main.h"
/**
 *jack_bauer - prints every minute from 00:00cto 23:59
 *
 *Return: none
 */
void jack_bauer(void)
{
	int i;
	int j;

	i = 0;
	while (i <= 23)
	{

		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}

