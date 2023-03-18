#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - entry
 *
 * Return: 1
 */
int main(void)
{
	char *print = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, print, strlen(print));
	return (1);
}
