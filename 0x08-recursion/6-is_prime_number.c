#include "main.h"

/**
 * is_prime_number - returns prime numbers.
 * @n: number to be checked against.
 * Return: 1 if true && 0 if false.
 */
int prime_num(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

/**
 * prime_num - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_num(n, i - 1));
}

