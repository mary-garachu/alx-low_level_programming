#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - prints  a function that searches a string
 * for any of a set of bytes.
 * @s: pointer to the search string.
 * @accept: pointer to the accept string.
 * Return: pointer to byte s or NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
