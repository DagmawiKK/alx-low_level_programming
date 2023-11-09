#include "main.h"
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *arrchar;

	arrchar = malloc(sizeof(char) * size);
	arrchar[0] = c;

	if (arrchar == NULL)
	{
		return (NULL);
	}
	return (arrchar);
}
