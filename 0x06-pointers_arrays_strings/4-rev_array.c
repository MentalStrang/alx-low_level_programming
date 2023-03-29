#include "main.h"
#include <math.h>

/**
 * reverse_array - compares two strings
 * @a: holds array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < floor(n / 2); i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
