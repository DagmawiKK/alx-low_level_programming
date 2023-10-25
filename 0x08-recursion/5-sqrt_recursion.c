#include "main.h"

/**
*_sqrt_recursion - calculates squareroot of a number
*@n: from which the sqaure root is calculated
*Return: th sqaure root value
*/

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 *
 * Return: the square root of n if it exists, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
