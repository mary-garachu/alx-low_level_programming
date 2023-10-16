#include <stdio.h>

/**
 * add - function that adds 2 numbers.
 * @a: first value.
 * @b: second value.
 * Return: sum
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - function that subtracts 2 numbers.
 * @a: first value.
 * @b: second value.
 * Return: sub.
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - function that multiplies 2 numbers.
 * @a: first value.
 * @b: second value.
 * Return: mul.
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - function that divides 2 numbers.
 * @a: first value.
 * @b: second value.
 * Return: div
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}
/**
 * mod - function that finds the rimainder of 2 numbers.
 * @a: first value.
 * @b: second value.
 * Return: mod.
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Modulo by zero\n");
		return (0);
	}
	return (a % b);
}
