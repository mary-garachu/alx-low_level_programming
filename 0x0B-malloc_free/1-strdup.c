#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 *  to a newly allocated space in memory.
 *  @str: input string to be copied.
 *  Return: pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *newStr;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	newStr = malloc(sizeof(char) * (len + 1));

	if (newStr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		newStr[i] = str[i];
	}

	newStr[len] = '\0';

	return (newStr);
}
