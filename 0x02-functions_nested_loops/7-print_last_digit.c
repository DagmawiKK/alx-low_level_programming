#include "main.h"
/**
 *print_last_digit - prints last digit of n
 *@n: the number from which the last digit is obtained
 *Return: the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	return ((last_digit * 10) + last_digit);
}

