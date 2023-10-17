#include <stdio.h>

/**
*_strlen - returns the length of a string.
*@s: the length of which the function checks
*Return: length of the string
*/

int _strlen(char *s)
{
	int i;
	int count;

	count = 0;
	for (i = 0; i != '\0'; i++)
	{
		s[i];
		count++;
	}
	return (count);
}
