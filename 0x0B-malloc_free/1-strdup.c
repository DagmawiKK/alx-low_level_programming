#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i, count;
	int j;
	char *newstr;

	if (str == (NULL))
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	count = 0;

	for (i = 0; str[i] != '\0'; i++)
		count++;

	newstr = malloc(sizeof(char) * (count + 1));

	if (newstr == (NULL))
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	for (j = 0; j < count; j++)
		newstr[j] = str[j];

	newstr[j] = '\0';

	return (newstr);
}
