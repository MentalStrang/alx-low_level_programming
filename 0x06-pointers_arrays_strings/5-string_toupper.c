#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: holds string
 * Return: string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < (int)strlen(s); i++)
		s[i] = toupper(s[i]);

	return (s);
}
