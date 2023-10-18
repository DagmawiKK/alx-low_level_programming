#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, mem, n, len, rem, digit;

	i = 0;
	mem = 0;
	n = 0;
	len = 0;
	rem = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && rem == 0)
	{
		if (s[i] == '-')
			++mem;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (mem % 2)
				digit = -digit;
			n = n * 10 + digit;
			rem = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			rem = 0;
		}
		i++;
	}

	if (rem == 0)
		return (0);

	return (n);
}
