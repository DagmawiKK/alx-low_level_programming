#include<stdio.h>
#include<string.h>
/**
 *main - prints the alphabet in small then caps
 *
 *Return: 0 if successful
 */
int main(void)
{
	char a;
	char A;

	while (a <= 'z')
	{
		putchar(a);
		a += 1;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A += 1;
	}
	putchar('\n');
	return (0);
}
