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
	int i;
	char l;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (l = 'a'; l <= 'f'; l++)
		putchar(l);

	putchar('\n');

	return (0);
}
