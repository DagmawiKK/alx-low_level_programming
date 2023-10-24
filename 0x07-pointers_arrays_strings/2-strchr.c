#include "main.h"

/**
*_strchr - locates a character in a string
*@s: pointer to string where the charcter is searched
*@c: the serached character
*Return: pointer to the first occurance of the characters
*/

char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
				 s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
