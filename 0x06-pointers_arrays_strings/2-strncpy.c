#include "main.h"

/**
 * _strncpy - copy str
 * Return: Returns a pointer to the resulting string dest
 * @dest: holds the dest
 * @src: holds the src
 * @n: holds the n
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
