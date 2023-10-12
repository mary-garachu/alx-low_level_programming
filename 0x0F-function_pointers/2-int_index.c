#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: input.
 * @size: no of elements in array.
 * @cmp: pointer to function.
 * Return: Value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);

}
