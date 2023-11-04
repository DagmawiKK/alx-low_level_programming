#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _isdigit - checks if a string is composed only of digits
 * @str: The string to check
 *
 * Return: 1 if the string is composed only of digits, 0 otherwise
 */

int _isdigit(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - computes the length of a string
 * @str: The string to compute the length of
 *
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * _mul - multiplies two positive numbers and prints the result
 * @num1: The first number to multiply
 * @num2: The second number to multiply
 *
 * Return: void
 */

void _mul(char *num1, char *num2)
{
	int len1, len2;
	int *result;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	result = calloc(len1 + len2, sizeof(int));
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}
	int i, mul;
	int j, sum;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			sum = result[i + j + 1] + mul;
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}
	int i;

	i = 0;
	while (i < len1 + len2 - 1 && result[i] == 0)
		i++;
	while (i < len1 + len2)
		_putchar(result[i++] + '0');
	_putchar('\n');
	free(result);
}

/**
 * main - entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	_mul(argv[1], argv[2]);
	return (0);
}

