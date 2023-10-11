#include "main.h"
/**
 *times_table - prints times table from 0 to n
 *@n: number of times of the table
 *Return: 0 successful
 */
void print_times_table(int n)
{
	int i;
	int j;
	int multiple;

	multiple = 0;
	if (n <= 15 && n >=0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multiple = i * j;
				if (j == 0)
				{
					_putchar(multiple + '0');
				}
				if (multiple < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multiple + '0');
				}
				else if (multiple >= 10 && multiple < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((multiple / 10) + '0');
					_putchar((multiple % 10) + '0');
				}
				else if(multiple >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((multiple / 100) + '0');
					_putchar((multiple / 10) + '0');
					_putchar((multiple % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
