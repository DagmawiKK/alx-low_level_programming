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
	int reverse_str[n];
	int mem;

	mem = n;
	for (i = 0; i < n && mem > 0; i++)
	{
		reverse_str[i] = a[mem - 1];
		mem--;
	}

	for (i = 0; i < n; i++)
		a[i] = reverse_str[i];
}
