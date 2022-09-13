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

	if (a <= 0)
		a *= -1;
	last = a % 10;
	_putchar(last + '0');
	return (last);
}
