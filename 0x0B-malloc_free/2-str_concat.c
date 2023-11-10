#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *catstr;
	int count1, count2;
	int memsize, i;
	int c, j;

	if (s1 == (NULL))
		s1 = "";
	if (s2 == (NULL))
		s2 = "";

	count1 = count2 = 0;

	while (s1[count1] != '\0')
		count1++;
	
	while (s2[count2] != '\0')
		count2++;

	memsize = count2 + count1 + 1;

	catstr = malloc(sizeof(char) * memsize);
	if (catstr == (NULL))
	{
		printf("failed to allocate memory\n");
		return (NULL);
	}

	for (i = 0; i < count1; i++)
	{
		catstr[i] = s1[i];
	}

	c = 0;

	for (j = count1; j < (memsize - 1); i++)
	{
		catstr[j] = s2[c];
		c++;
	}
	catstr[memsize - 1] = '\0';

	return (catstr);
}
