#include "main.h"

/**
*print_array - prints n elements of an array of integers
*@a - the point to array
*@n - number of elements
*Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (i != n-1)
			printf("%d, ", a[i]);
		else
			 printf("%d", a[i]);
	}
}
