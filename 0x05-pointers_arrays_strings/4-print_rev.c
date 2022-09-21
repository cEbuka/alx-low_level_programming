#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints reverse string
 * @s: string
 *
 */

void print_rev(char *s)
{
	int len = 0;
	int index;


	index = 0;
	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);
	_putchar('\n');
}
