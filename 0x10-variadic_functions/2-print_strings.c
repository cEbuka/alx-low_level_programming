#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints numbers with a separator
 * @separator: separator
 * @n: count of numbers
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator == NULL)

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
