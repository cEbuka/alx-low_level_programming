#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from @n to 98
 * @n: starting point number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
		printf("\n");
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
		printf("\n");
	}
}
