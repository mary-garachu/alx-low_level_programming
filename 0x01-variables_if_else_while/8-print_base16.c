/*
 * File: 8-print_base16.c
 */

#include <stdio.h>

/**
 * main - Print all the numbers of base 16 in lowercase.
 *
 * Return: 0.
 */
int main(void)
{
	int num;
	char l;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
