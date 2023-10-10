#include "main.h"
/**
 *main -  prints the alphabet, in lowercase, followed by a new line.
 *
 *Return: Always 0 (Successful)
 */
int main(void)
{
	print_alphabet(void);
	return (0);
}

void print_alpahbet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}

