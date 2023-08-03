#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * flip_bits-a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first value.
 * @m: second value.
 * Return: no of bits required.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
