#include "main.h"

/**
 *infinite_add - adds two numbers
 *@n1: first numbers
 *@n2: second numbers
 *@r: buffer to store result
 *@size_r: buffer size
 *Return: pointer to result or 0 if buffer is too small
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	int k, l1;
	int l2, sum;
	int carry;

	carry = 0;
	for (l1 = 0; n1[l1]; l1++)
		;
	for (l2 = 0; n2[l2]; l2++)
		;
	if (l1 + 2 > size_r || l2 + 2 > size_r)
		return (0);
	for (i = l1 - 1, j = l2 - 1, k = 0; i >= 0 || j >= 0 || carry; i--, j--, k++)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[k] = sum % 10 + '0';
}
	r[k] = '\0';
	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		sum = r[i];
		r[i] = r[j];
		r[j] = sum;
	}
	return (r);
}


