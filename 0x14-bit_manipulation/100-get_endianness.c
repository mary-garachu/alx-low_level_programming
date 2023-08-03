#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_endianness-  a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *ptr = (char *)&x;

	return (*ptr);
}
