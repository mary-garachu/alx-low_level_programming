#include "main.h"

/**
 * rev_string - print a string in reverse.
 * @s: input string.
 * Return: reversed string.
 */

void rev_string(char *s)
{
	int i, len;

	char *start, *end = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		end++;
	}
	len = i + 1;
	start = s;

	for (i = 0; i < len / 2; i++)
	{
		char x;

		x = *end;
		*end = *start;
		*start = x;
		start++;
		end--;
	}
	end[len + 1] = '\0';
}
