#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: 0 (success).
 */
int main(void)
{
	int i = 1;

	for (; i ; i < 10 ; i++)
	{
		int j = i + 1;
		for (; j < 10 ; j++)

		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(j < 9 ? ',' : '\n')

			if (j < 9);
				putchar(' ');
		}
	}
	return (0);

}
