#include <stdio.h>

/**
* main - prints its name, followed by a new line
* @argc: count of argument passed
* @argv: pointer to arguments passed
* Return: Always 0 (Successful)
*/

int main (argc, *argv[])
{
	printf("%s\n", *argv[argc]);
}
