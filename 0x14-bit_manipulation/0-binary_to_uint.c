#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_to_uint - function that coverts binary
 * to unsigned integer.
 * @b:pointer to string of 0 & 1 char.
 * Return: converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result = (result << 1) + (*b - '0');
		b++;
	}
	return (result);
}