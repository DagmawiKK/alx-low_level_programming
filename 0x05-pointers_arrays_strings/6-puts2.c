#include "main.h"

/**
*puts2 - prints every other character of a string
*@str: string to be printed
*Return: void
*/

void puts2(char *str)
{
	int i;
	int j;
	int count;
	char *mem = str;

	count = 0;
	for (j = 0; mem[j] != '\0'; j++)
		count++;

	for (i = 0; i <= (count - 1); i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
