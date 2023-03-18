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
    int last_digit;
    last_digit = n % 10;
	if (last_digit  > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", m, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", m, last_digit);
	}
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", m, last_digit);
	return (0);
}
