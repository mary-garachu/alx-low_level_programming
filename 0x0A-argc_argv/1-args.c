#include <stdio.h>

/**
 * main - prints the number of
 * arguments passed into it.
 * @argc: number of commands.
 * @argv: array.
 * Return: 0 always.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("argc = %d\n", argc - 1);
	return (0);
}
