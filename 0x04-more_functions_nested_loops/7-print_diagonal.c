#include "main.h"

/**
 * print_line - draws a diagonal line on the terminal.
 * @n: n -  Variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int x;
	int y;

	if (x <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
