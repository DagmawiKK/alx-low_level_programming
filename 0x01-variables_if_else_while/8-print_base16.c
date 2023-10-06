#include<stdio.h>
/**
 *main - print hexadecimal characters
 *
 *Return: 0 if successful
 */
int main(void)
{
	char a;
	char zero;

	a = 'a';
	zero = '0';
	while (zero <= 57)
	{
		putchar(zero);
		zero++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
