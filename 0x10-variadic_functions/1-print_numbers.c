#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers with a separator
 * @separator: separator
 * @n: count of numbers
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
			if (i != (n - 1))
				printf("%s", separator);
			else
				printf("\n");
		}
	}
	va_end(list);
}
