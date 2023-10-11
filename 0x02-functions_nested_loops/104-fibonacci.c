#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long term1, term2, next_term;
	int count;

	term1 = 1;
	term2 = 2;
	printf("%ld, %ld", term1, term2);
	for (count = 3; count <= 98; count++)
	{
		next_term = term1 + term2;
		printf(", %ld", next_term);
		term1 = term2;
		term2 = next_term;
	}
	printf("\n");
	return (0);
}

