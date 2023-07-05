#include "main.h"

/**
 * sqroot - helper function.
 * @i: same number as n
 * @j: squareroot.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int sqroot(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (sqroot(i, j + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}
