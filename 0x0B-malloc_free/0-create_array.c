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
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arrchar = malloc(sizeof(char) * size);

	if (arrchar == NULL)
	{
		printf("failed to allocate memory.\n");
		return (NULL);
	}

	for (i = 0; i < size; i++)
		arrchar[i] = c;

	return (arrchar);
}
