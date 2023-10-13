#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int sum_num;

	if (n < 0)
	{
		sum_num = -n;
		_putchar('-');
	} else
	{
		sum_num = n;
	}

	if (some_num / 10)
	{
		print_number(some_num / 10);
	}

	_putchar((some_num % 10) + '0');
}

