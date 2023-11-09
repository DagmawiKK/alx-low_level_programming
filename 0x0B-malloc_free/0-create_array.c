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
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	arrchar = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		arrchar[i] = c;
	}

	if (arrchar == NULL)
	{
		fputs("failed to allocate memory.\n", stderr)
		return (NULL);
	}
	return (arrchar);
}
