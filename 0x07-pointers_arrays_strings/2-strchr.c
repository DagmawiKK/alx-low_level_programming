#include "main.h"

/**
*_strchr - locates a character in a string
*@s: pointer to string where the charcter is searched
*@c: the serached character
*Return: pointer to the first occurance of the characters
*/

char *_strchr(char *s, char c)
{
	int i;

	if (*s == '\0')
		return (s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
