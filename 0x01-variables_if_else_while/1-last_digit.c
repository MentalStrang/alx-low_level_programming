#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = m = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", m, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", m, n);
	return (0);
}
