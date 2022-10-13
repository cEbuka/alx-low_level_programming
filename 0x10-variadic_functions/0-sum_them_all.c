#include "main.h"

/**
 * sum_them_all - sums all of it parameters
 * @n: number of parameters
 *
 * Return: sum or 0 if failed
 */

int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += var_arg(list, int);
	}
	va_end(list);
	return (sum);
}
