#include "main.h"

/**
 * print_line - draws a diagonal line on the terminal.
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		for (x = 1; x <= n; x++)
		{
			_putchar(92);
		}
	}
	_putchar('\n');
}
