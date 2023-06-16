/*
 * File: 0-positive_or_negative.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a the alphabet in lowercase, followed by a new line
 *	  and can only use the putchar function
 *
 * Return: Always 0.
*/
int main(void)
{
	char letter = 'a';

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
