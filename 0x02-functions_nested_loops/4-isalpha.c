#include "main.h"
/**
 *_isalpha - checks if a char is alphabetic character.
 *@c: the checked char
 *Return: 1 if char alphabetic character else 0
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
