#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
	int i;
	int count;
	int j;
	int c;
	char *newstr;

	for (i = 0; str[i] != '\0'; i++)
		count++;
	
	newstr = malloc(sizeof(char) * count);
	
	if (newstr == (NULL))
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	c = 0;

	for (j = 0; j <= count; j++)
	{
		newstr[j] = str[c];
		c++;
	}

	return(newstr);
}
