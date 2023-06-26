#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a:first input.
 * @b:second input.
 */

void swap_int(int *a, int *b)
{
	int changed;

	changed = *b;
	*b = *a;
	*a = changed;
}
