#include "main.h"

/**
* main - prints all arguments it receives
* @argc: the number of arguments passed
* @argv: pointer to arguments passed
* Return: Always 0 (Successful)
*/

int main(int argc, char *argv[])
{
	int i;
	int j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			_putchar(argv[i][j]);
		_putchar('\n');
	}

	return (0);
}
