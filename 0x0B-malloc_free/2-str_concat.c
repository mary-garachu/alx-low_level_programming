#include "main.h"
#include <stdlib.h>

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: pointer to new string.
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int index1, index2 = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index1 = 0; s1[index1] || s2[index1]; index1++)
		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (index1 = 0; s1[index1]; index1++)
		concat[index2++] = s1[index1];

	for (index1 = 0; s2[index1]; index1++)
		concat[index2++] = s2[index1];

	return (concat);
}
