#include "main.h"
/**
 *_abs - finds absolute value of an integer
 *@n: the checked integer
 *Return: Always 0 (Successful)
 */
int _abs(int n)
{
	if (n >= 0)
		_putchar(n);
	else
		_putchar(n * (-1));
	return (0);
}
