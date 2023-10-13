#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int number = 612852475143;
	long int largestPrimeFactor = -1;
	long int i;

	while (number % 2 == 0)
	{
		largestPrimeFactor = 2;
		number /= 2;
	}
	for (i = 3; i <= sqrt(number); i += 2)
	{
		while (number % i == 0)
		{
			largestPrimeFactor = i;
			number /= i;
		}
	}
	if (number > 2)
	{
		largestPrimeFactor = number;
	}
	printf("%ld\n", largestPrimeFactor);
	return (0);
}
