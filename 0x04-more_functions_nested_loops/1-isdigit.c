#include "main.h"

/**
 *_isdigit - checks if c is a digit
 *@c: the integer checked
 *Return: 1 if c is digit, else 0
 */

int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
		return (1);
	else
		return (0);
}
