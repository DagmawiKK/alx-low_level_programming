#include<stdio.h>
/**
 *main - prints all possible combinations of single-digit numbers
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
		if (zero < 57)
		{
			putchar(',');
			putchar(' ');
		}
		zero++;
	}
	putchar('\n');
	return (0);
}

