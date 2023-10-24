#include "main.h"

/**
*_strspn - gets the length of a prefix substring
*@s: the string checked
*@accept: character looked for
*Return:number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	int l, i;
	unsigned int a;

	i = 0;
	l = 0;
	a = 0;
	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[l] != '\0')
		{
			if (s[i] == accept[l])
				a++;
			l++;
		}
		i++;
		l = 0;
	}
	return (a);
}

