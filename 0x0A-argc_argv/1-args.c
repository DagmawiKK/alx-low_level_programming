#include "main.h"

/**
* main -	prints the number of arguments passed into it
* @argc: number of arguments passed
* @argv: pointer to arguments passed
* Return: Always 0 (Successful)
*/
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	while (*argv++)
		count++;
	_putchar(count - 1 + '0');
	_putchar('\n');
	(void)argc;
	return (0);
}
