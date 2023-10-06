#include<stdio.h>
/**
 *main - 
 *
 *Return: 0 if successful
 */
int main(void)
{
	char a;

	while (a <= 'z')
	{
		if (a != 'e' || a != 'q')
			putchar(a);
		a += 1;
	}
	putchar('\n');
	return (0);
}
