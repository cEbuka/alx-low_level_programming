#include <stdio.h>
/**
 * main -Entry point.
 *
 * @void: No params.
 *
 * Return: Always 0(success).
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
