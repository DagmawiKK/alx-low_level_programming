#include "main.h"

/**
 *_isupper - checks if a letter is uppercase
 *@c: the int checked
 *Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
