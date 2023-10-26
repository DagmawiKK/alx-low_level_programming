#include "main.h"

/**
*is_palindrome - checks if a string is a palindrome
*@s: the checked string
*Return: 1 if a string is a palindrome and 0 if not
*/

int is_palindrome(char *s)
{
	int len = 0;
	char *end = s;

	while (*end != '\0')
	{
		len++;
		end++;
	}

	while (s < end)
	{
		if (*s != *(end - 1))
			return (0);
		s++;
		end--;
	}
	return (1);
}
