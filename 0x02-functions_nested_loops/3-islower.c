#include "main.h"
/**
 *_islower - checks for lowercase character.
 *@c: is the char to be checked
 *Return: 1 if lower case otherwise 0;
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
