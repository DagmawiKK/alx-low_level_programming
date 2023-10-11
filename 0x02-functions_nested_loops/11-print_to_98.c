#include "main.h"
/**
 *print_to_98 - prints all natural numbers from n to 98
 *@n: the number two which 98 is counted from
 *Return: void
 */
void print_to_98(int n)
{
	int i;

	i = 98;

	if (n == i)
		printf("%d", n);
	while (n > i)
	{
		printf("%d", n);
		n--;
		if (n > i)
		{
			printf(", ");
		}
	}
	while (n < i)
	{
		printf("%d", n);
		n++;
		if (n < i)
		{
			printf(", ");
		}
	}
}
