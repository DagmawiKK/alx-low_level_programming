#include "main.h"

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

	catstr = malloc(sizeof(char) * (count1 + count2 + 1));
	if (catstr == (NULL))
	{
    free(catstr);
		printf("failed to allocate memory\n");
		return (NULL);
	}

	for (i = 0; i < count1; i++)
		catstr[i] = s1[i];

	c = 0;

	for (j = count1; j < (memsize - 1); i++)
	{
		catstr[j] = s2[c];
		c++;
	}

	return (catstr);
}
