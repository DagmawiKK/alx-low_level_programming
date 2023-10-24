#include "main.h"

/**
*_memset - fills memory with a constant byte
*@s: points to b
*@b: the constant byte
*@n: bytes of memory
*Return: pointer to memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	s[n] = '\0';
	return (s);
}
