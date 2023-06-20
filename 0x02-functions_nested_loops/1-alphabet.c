#include "main.h"

/**
 * main-prints the alphabet, in lowercase, followed by a new line.
 * description: _putchar can only be used twice in my code
 * Author: Mary Garachu
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
