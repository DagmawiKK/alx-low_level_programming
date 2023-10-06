#include<stdio.h>
#include<string.h>
/**
 *main - 
 *
 *Return: 
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (i != j && j != k && i != k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);
					if (i <= 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
