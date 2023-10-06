#include<stdio.h>
/**
 *main - prints the alphabet except q and e
 *
 *Return: 0 if successful
 */
int main(void)
{
	char a;
	char e;
	char q;

	a = 'a';
	e = 'e';
	q = 'q';
	while (a <= 'z')
	{
		if (a == e || a == q)
		{
			a += 1;
			continue;
		}
		else
		{
			putchar(a);
			a += 1;
		}
	}
	putchar('\n');
	return (0);
}
