#include<stdio.h>
/**
 *main - prints 0 to 9 using putchar
 *
 *Return: 0 if successful
 */
int main(void)
{
	char zero;

	zero = '0';
	while (zero <= '9')
	{
		putchar(zero);
		zero++;
	}
	putchar('\n');
	return (0);
}
