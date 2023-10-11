#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int term1, term2, next_term, count;

	term1 = 1;
	term2 = 2;
	printf("%d, %d", term1, term2);
	for (count = 3; count <= 98; count++)
	{
		next_term = term1 + term2;
		printf(", %d", next_term);
		term1 = term2;
		term2 = next_term;
	}
	printf("\n");
	return (0);
}

