#include "main.h"

/*
*_memcpy - copies memory area
*@dest: where n bytes memory is copied too
*@src: where n bytes of memory is copied from
*@n: Bytes of memory copied
*Return: the copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
