#include "main.h"
#include <stdlib.h>

/**
 * array_range- creates an array of integers.
 * @min: min value.
 * @max: max value.
 * Return: pointer to new array.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));
	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + 1;
	}

	return (array);
}

