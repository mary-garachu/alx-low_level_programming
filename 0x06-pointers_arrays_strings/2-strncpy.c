#include "main.h"

/**
 * *_strncpy - Writes a function that copies a string.
 * @dest: input
 * @src: input
 * @n: max no. of chars to be copied.
 * Return: a pointer to dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0' && a < n; a++)
	{
		dest[a] = src[a];
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
