#include "main.h"

/**
*_strcmp - compares two strings
*@s1: one of the strings
*@s2: the other string
*Return: 0 if equal, -ve if s1 is less than s2
*+ve if s1 is greater than s2
*/

int _strcmp(char *s1, char *s2)
{
	int i;
	int val;

	for (i = 0; s1[i] && s2[i] && s1[i] == s2[i]; i++)
	;
	val = s1[i] - s2[i];

	return (val);
}
