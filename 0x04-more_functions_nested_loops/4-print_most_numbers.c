#include "main.h"

/**
 * print_numbers - print 0 through 10
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
