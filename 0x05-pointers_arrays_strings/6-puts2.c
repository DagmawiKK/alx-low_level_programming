#include "main.h"

/**
*puts2 - prints every other character of a string
*@str: string to be printed
*Return: void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
		if (str[i] != '0' || str[i] != '\\')
			continue;
	}
	_putchar('\n');
}
