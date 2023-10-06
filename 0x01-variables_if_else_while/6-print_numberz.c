#include<stdio.h>
/**
 *main - prints 0 to 9 using putchar
 *
 *Return: 0 if successful
 */
int main(void)
{
	int zero;

	zero = 48;
	while (zero <= 57)
	{
		putchar(zero);
		zero++;
	}
	putchar('\n');
	return (0);
}
