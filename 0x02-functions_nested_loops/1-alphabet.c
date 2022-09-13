#include "main.h"
/**
 * print_alphabet - Print lowercase letters
 *
 * Return: (0) success
 */
void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)/* iterate through a-z */
		_putchar(c);
	_putchar('\n');
}
