#include "main.h"

/**
 * rev_string - print a string in reverse.
 * @s: input string.
 * Return: reversed string.
 */

void rev_string(char *s)
{
	char begin = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		begin = s[i];
		s[i] = s[counter];
		s[counter] = begin;
	}
}

