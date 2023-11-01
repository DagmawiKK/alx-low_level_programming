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
	} else {
		multiple = (int)argv[1] * (int)argv[2];
		_putchar(sum + '0');
		_putchar('\n');
		return (0);
	}
}
