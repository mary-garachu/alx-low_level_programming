#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - a function that prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(arg, const char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("nil");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(arg);
	printf("\n");
}
