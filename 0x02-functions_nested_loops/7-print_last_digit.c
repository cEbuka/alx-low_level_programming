#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @a: number
 *
 * Return: last digit of @a
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;
	if (a <= 0 || last < 0)
	{
		a *= -1;
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
