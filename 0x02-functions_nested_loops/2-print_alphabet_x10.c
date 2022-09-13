#include "main.h"
/**
 * print_alphabet_x10 - Print lowercase letters x10 
 *
 * Return: (0) success
 */
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 10)
	{
	char c = 'a';

	for (; c <= 'z'; c++)/* iterate through a-z */
		_putchar(c);
	_putchar('\n');
	i++;
	}
}
