#include<stdio.h>
#include<string.h>
/**
 *main - prints the alphabet in lower case
 *
 *Return: SUCCESS if successful
 */
int main(void)
{
	char a;
	char z;
	char some;

	a = 'a';
	z = 'z';
	while (some <= z)
	{
		strcpy(some, a);
		putchar(some);
		some += 1;
	}
	exit(SUCCESS);
}
