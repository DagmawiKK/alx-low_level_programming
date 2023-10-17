#include <stdio.h>

/**
*swap_int - swaps the values of two integers.
*@a: one of the int
*@b: one of the int
*Return: void
*/
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
