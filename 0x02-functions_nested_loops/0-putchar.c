#include "main.h"
/**
 *main - prints _putchar with a new line
 *
 *Return: Always 0 (Successful)
 */
int main(void)
{
	int i;
	char my_char[] = "_putchar";

	i = 0;
	while (my_char[i] != '\0')
	{
		_putchar(my_char[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
