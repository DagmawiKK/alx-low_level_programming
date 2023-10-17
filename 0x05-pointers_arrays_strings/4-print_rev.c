#include "main.h"

/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: string to be reversed
*Return:void
*/

void print_rev(char *s)
{
	int i;
	int count;
	int j;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (j = 0; j <= count; j++)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
