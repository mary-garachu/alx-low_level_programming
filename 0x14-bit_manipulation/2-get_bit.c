#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_bit-function that returns the value
 * of a bit at a given index.
 * @n: input.
 * @index: is the index, starting from 0
 * Return: value of the bit at index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	int bit_value = (n & mask) != 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (bit_value);
}
