#include "main.h"

/**
* main - prints its name, followed by a new line
* @argc: count of argument passed
* @argv: pointer to arguments passed
* Return: Always 0 (Successful)
*/

int main (int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i])
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
		_putchar('\n');
	}

	return (0);
}
