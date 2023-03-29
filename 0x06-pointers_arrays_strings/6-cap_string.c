#include "main.h"
#include <ctype.h>

/**
 * cap_string - changes all lowercase letters of a string to uppercase
 * @s: holds string
 * Return: string
 */
char *cap_string(char *s)
{
	int i;
	int skip = 0;
	char c;
	char *seps = " \t\n,;.!?\"(){}";

	for (i = 0; i < (int)strlen(s); i++)
	{
		c = s[i];
		if (skip == 1)
		{
			if (strchr(seps, c) != NULL)
				skip = 0;
			continue;
		}

		if (strchr(seps, c) != NULL)
			continue;

		if (isalpha(c) != 0)
			s[i] = toupper(c);

		skip = 1;
	}

	return (s);
}
