#include<stdio.h>
/**
 *main - prints the fibonacci sequence upto 50
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	long long fib1, fib2, nextFib;

	fib1 = 1;
	fib2 = 2;
	printf("%lld, %lld", fib1, fib2);
	for (int i = 3; i <= 50; i++)
	{
		nextFib = fib1 + fib2;
		printf(", %lld", nextFib);
		fib1 = fib2;
		fib2 = nextFib;
	}
	printf("\n");
	return (0);
}
