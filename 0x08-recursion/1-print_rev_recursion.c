#include "main.h"

/**
 * _print_rev_recursion - print reverse of @s recursively
 * @s: string
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
		if (*s == '\0')
			_putchar('\n');
	}
}
