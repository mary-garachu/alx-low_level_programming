#include "main.h"

/**
 * rot13 - Entry point
 * Desc: Entry
 *@n: pointer
 * Return: Always 0 (Success)
 */
char *rot13(char *n)
{
	int i;
	int j;
	char original[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; *(n + i) != '\0' ; i++)
	{
		for (j = 0 ; original[j] != '\0'; j++)
		{
			if (*(n + i) == original[j])
			{
				*(n + i) = rot[j];
				break;
			}
		}
	}
	return (n);
}
