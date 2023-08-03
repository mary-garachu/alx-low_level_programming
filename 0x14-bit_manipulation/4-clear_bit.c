#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 *clear_bit-function that sets the value of a bit
 * to 0.
 *@n:input.
 *@index:is the index, starting from 0.
 *Return:1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~mask;
	return (1);
}
