#include "main.h"

/**
* main -	prints the number of arguments passed into it
* @argc: number of arguments passed
* @argv: pointer to arguments passed
* Return: Always 0 (Successful)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; *argv[i] != (NULL); i++)
	;
	_putchar((i + 1) + '0');
	_putchar('\n');

	return (0);
}
