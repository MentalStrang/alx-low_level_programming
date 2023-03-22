#include "main.h"
#include <string.h>

/**
 * main - entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	size_t i;
	char str[] = "_putchar\n";

	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);
	return (0);
}
