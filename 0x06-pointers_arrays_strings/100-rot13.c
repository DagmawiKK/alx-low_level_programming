#include "main.h"

/**
*rot13 - encodes a string using rot13
*@str: string to be encoded
*Return: the encoded string
*/

char *rot13(char *str)
{
	int i;
	int j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}

