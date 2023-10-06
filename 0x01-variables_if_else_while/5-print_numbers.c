#include<stdio.h>
/**
 *main - print 0 to 9
 *
 *Return: 0 if successful
 */
int main(void)
{
	int start;

	start = 0;
	while (start < 10)
	{
		printf("%d\n", start);
		start++;
	}
	return (0);
}
