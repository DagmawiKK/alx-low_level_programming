#include "main.h"

/**
* main - multiplies two numbers
* @argc: the number of arguments
* @argv: pointer to the arguments
* Return: 0 if successful or else 1
*/

int main(int argc, char *argv[])
{
	int i;
	int multiple;

	char error[] = "Error";

	if (argc != 3)
	{
		for (i = 0; error[i] != '\0'; i++)
			_putchar(error[i]);
		_putchar('\n');
		return (1);
	}
	else
	{
		multiple = (*argv[1] - '0') * (*argv[2] - '0');

		while (multiple > 0)
		{
			_putchar((multiple % 10) + '0');
			multiple /= 10;
		}
		_putchar('\n');
		return (0);
	}
}
