#include "main.h"

/*
*_strpbrk - searches a string for any of a set of bytes
*@s: the string searched in
*@accept: the string searched for
*Return:	a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		j = 0;
		s++;
	}
	return ('\0');
}
