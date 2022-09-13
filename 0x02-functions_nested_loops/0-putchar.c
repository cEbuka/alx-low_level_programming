#include "main.h"
/**
 * main - Print "_putchar" to stdout
 *
 * Return: (0) Success
 */
int main(void)
{
	char *s = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
