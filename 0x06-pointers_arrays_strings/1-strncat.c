#include "main.h"

/**
*_strncat - concatenates two strings
*@dest: one of the strings
*@src: the other string
*@n: max number of byte
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
