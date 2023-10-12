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

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
		{
			for (y = 1; y <= n; y++)
			{
				if (x == y)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
