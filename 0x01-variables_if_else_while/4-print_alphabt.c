#include<stdio.h>
/**
 *main - prints the alphabet except q and e
 *
 *Return: 0 if successful
 */
int main(void)
{
	char a;

	a = 'a'
	while (a <= 'z')
	{
		if (a != 'e' || a != 'q')
			putchar(a);
		a += 1;
	}
	putchar('\n');
	return (0);
}
