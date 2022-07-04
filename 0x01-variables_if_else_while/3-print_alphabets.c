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
	char l, L;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);

	putchar('\n');

	return (0);
}
