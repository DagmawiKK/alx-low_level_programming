#include "main.h"

/**
*_strncpy - copies a string
*@dest: copied to
*@src: copied from
*@n: bytes for src
*Return: copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}


	return (dest);
}
