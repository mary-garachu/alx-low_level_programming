#include "main.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * print_binary- function that prints the binary
 *  representation of a number.
 *  @n:number to be converted to binary.
 */

void print_binary(unsigned long int n)
{
	int shift = sizeof(unsigned long int) * 8 - 1;
	int leading_zeros = 1;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (shift >= 0)
	{
		unsigned long int mask = 1UL << shift;

		if (n & mask)
		{
			putchar('1');
			leading_zeros = 0;
		}
		else if (!leading_zeros)
		{
			putchar('0');
		}
		shift--;
	}
}
