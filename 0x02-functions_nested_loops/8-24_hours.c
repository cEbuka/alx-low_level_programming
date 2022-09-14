#include "main.h"
/**
 * jack_bauer - print from 00:00 to 23:59
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, fdigit_i, ldigit_i, fdigit_j, ldigit_j;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			fdigit_i = i / 10;/* get first number of i */
			ldigit_i = i % 10;/* get last number of i */
			fdigit_j = j / 10;
			ldigit_j = j % 10;
			_putchar(fdigit_j + '0');
			_putchar(ldigit_j + '0');
			_putchar(':');
			_putchar(fdigit_i + '0');
			_putchar(ldigit_i + '0');
			_putchar('\n');
		}
	}
}
