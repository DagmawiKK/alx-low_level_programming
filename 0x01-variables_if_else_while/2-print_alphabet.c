#include<stdio.h>
/**
 *main - prints the alphabet in lower case
 *
 *Return: 1 if successful
 */
int main(void)
{
	char a;
	char z;
	char some;

	a = 'a';
	z = 'z';
	while (some <= z and some >= a)
	{
		putchar(some);
		some += 1;
	}
	return (1);
}
