#include "main.h"

/**
*puts2 - prints every other character of a string
*@str: string to be printed
*Return: void
*/

void puts2(char *str)
{
	int i;
	int count;
	int j;

	for (j = 0; str[j] != '\0'; j++)
		count++;
	for (i = 0; str[i] != '\0' && i < count; i = i + 2)
		if (str[i] != '0' || str[i] != '\\')
			_putchar(str[i]);
	_putchar('\n');
}
