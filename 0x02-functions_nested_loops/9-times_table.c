#include "main.h"
/**
 *times_table - prints times table from 0 to 9
 *
 *Return: none
 */
void times_table(void)
{
	int i;
	int j;
	int multiple;

	multiple = 0;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiple = i * j;
			_putchar(multiple + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
