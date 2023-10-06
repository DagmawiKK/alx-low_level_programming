#include<stdio.h>
/**
 *main - prints lower case alphabets in reverse
 *
 *Return: 0 if successful
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
