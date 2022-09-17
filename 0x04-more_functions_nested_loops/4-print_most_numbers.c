#include "main.h"

/**
 * print_most_numbers - print 0 through 10 except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	for (; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
