#include<stdio.h>
/**
 *main - computes multiple of 5 and 3 and sum up
 *
 *Return: Always 0 (Successful)
 */
int main(void)
{
	int i, result;
	
	result = 0;
	for (i = 1; i < 1024; i++;)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result = result + i;
	}
	printf("%d\n", result);
	return (0);
}

		
