/*
 * File: 2-print_alphabet.c
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the alphabet in lowercase from a to z.
 *
 * Return: 0.
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
