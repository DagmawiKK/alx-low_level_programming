#include "main.h"

/**
*check_prime - checks if a number is prime
*@i: possible divisor of n
*Return:	if the input integer is a prime number, otherwise return 0
*/

int check_prime(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
/**
*is_prime_number - checks is a number is prime
*@n: the checked number
*Return:	if the input integer is a prime number, otherwise return 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
