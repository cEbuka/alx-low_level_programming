#include "main.h"
/**
 * print_alphabet - Print lowercase letters
 *
 * Return: (0) success
 */
void print_alphabet(void)
{
	char i = 'a';

	for (; i < 'z'; i++)/* iterate through a-z */
		_putchar(i);
	_putchar('\n');
}
