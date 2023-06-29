#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings.
 * @dest: input
 * @src: input
 * Return: a pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}
	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	
	return (dest);
}
