#include "main.h"

/**
*factorial - calculates nth factorial
*@n: the number of which the factorial is calculated
*Return: the factorial result
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
