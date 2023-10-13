#include "main.h"

/**
 * print_number - prints an integer
 * @n: the integer to print
 */
void print_number(int n)
{
	char buffer[20];
	int i = 0, sign = 1;

	if (n < 0)
	{
		sign = -1;
		_putchar('-');
		n = -n;
	}
	do
	{
		buffer[i++] = n % 10 + '0';
		n /= 10;
	} while (n > 0);
	while (--i >= 0)
		_putchar(buffer[i]);
}
