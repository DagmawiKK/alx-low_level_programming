#include<stdio.h>
#include<string.h>
/**
 *main - prints the alphabet in lower case
 *
 *Return: 1 if successful
 */
int main(void)
{
	char a;
	char z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		putchar(a);
		a += 1;
	}
	return (1);
}
