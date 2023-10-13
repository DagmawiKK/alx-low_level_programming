#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int k;

		for (k = 1; k <= size; k++)
		{
			int i, j;

			for (i = k; i < size; i++)
				_putchar(' ');
			for (j = 1; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
