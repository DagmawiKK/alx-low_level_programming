#include "main.h"

/**
*puts_half - prints half of a string
*@str: the str to be printed
*Return: void
*/

void puts_half(char *str)
{
	int i;
	int count;
	int j;
	int k;
	int count2;

	count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	if (count / 2 == 0)
	{
		count2 = count / 2;
		for (j = 0; count2 < count; j++)
		{
		_putchar(str[count2 + 1]);
		count2++;
		}
	} else
	{
		count = count - 1;
		count2 = count / 2;
		for (k = 0; count2 < count; k++)
		{
			_putchar(str[count2]);
			count2++;
		}
	}
  _putchar('\n');
}
