#include<stdio.h>
/**
 *main - prints all possible combinations of single-digit numbers
 *
 *Return: 0 if successful
 */
int main(void)
{
	int zero;
	int nine;

	zero = 48;
	nine = 57;
	while (zero < 57)
	{
		putchar(zero);
		putchar(',');
		putchar(' ');
		zero++;
	}
	putchar(nine);
	return (0);
}

