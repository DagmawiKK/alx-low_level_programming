#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>
/* betty style doc for function main goes there */
/**
 *main - assigns random n value and checks a condition
 *
 *Return 0 if it successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n[-1] > 5)
		printf("%d is %d and is greater than 5", n, n[-1]);
	else if (n[-1] < 6 && n[-1] != 0)
		printf("%d is %d and is less than 6 and not 0", n, n[-1]);
	else
		printf("%d is %d and is 0", n, n[-1]);
	return (0);
}
