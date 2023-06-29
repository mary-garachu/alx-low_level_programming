#include "main.h"

/**
 * *_strncat - Write a function that concatenates two strings.
 * @dest: input
 * @src: input
 * @n: variable
 * Return: a pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}

	dest[a + b] = '\0';
	return (dest);
}
