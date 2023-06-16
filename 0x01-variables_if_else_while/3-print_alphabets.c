/*
 * File: 3-print_alphabets.c
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and in uppercase.
 *
 * Return: 0.
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	for (l = 'A'; l <= 'Z'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
