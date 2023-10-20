#include "main.h"

/**
*reverse_array - reverses the content of an array of integers
*@n: number of elements of the array
*@a: the array
*Return: void
*/

void reverse_array(int *a, int n)
{
	int i;
	int mem;

	for (i = 0; i < n--; i++)
	{
		mem = a[i];
		a[i] = a[n];
		a[n] = mem;
	}
}
