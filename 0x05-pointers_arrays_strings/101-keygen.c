#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int passlen[100];
	int i, tries, n;

	tries = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		passlen[i] = rand() % 78;
		tries += (passlen[i] + '0');
		putchar(passlen[i] + '0');
		if ((2772 - tries) - '0' < 78)
		{
			n = 2772 - tries - '0';
			tries += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
