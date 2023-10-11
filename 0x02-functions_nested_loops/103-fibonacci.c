#include <stdio.h>
/**
 *main - prints the sum of the even-valued terms of fibonacci
 *
 *Return: Always 0
 */
int main(void)
{
	int term1, term2, sum, next_term;

	next_term = 0;
	term1 = 1;
	term2 = 2;
	sum = 0;
	while (term1 <= 4000000)
	{
		if (term1 % 2 == 0)
		{
			sum += term1;
		}
		next_term = term1 + term2;
		term1 = term2;
		term2 = next_term;
	}
	printf("%d\n", sum);
	return (0);
}
