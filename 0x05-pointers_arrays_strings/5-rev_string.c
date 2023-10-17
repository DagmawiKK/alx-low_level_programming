#include "main.h"

/**
*rev_string - reverses a string.
*@s: string to be reversed
*Return: void
*/

void rev_string(char *s)
{
	int i;
	int j;
	int count;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (j = count - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
