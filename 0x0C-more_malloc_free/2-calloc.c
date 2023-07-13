#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array.
 * @nmemb: array elements.
 * @size: element size.
 * Return:  pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *ptr2;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	ptr2 = ptr;

	for (i = 0; i < (size * nmemb); i++)
		ptr2[i] = '\0';

	return (ptr);
}
