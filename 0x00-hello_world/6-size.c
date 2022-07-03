#include <stdio.h>
/**
 * main - Entry point for program.
 *
 * printf - Prints formated string to display.
 *
 * @void: Takes no parameter
 *
 * Return: 0 (successful)
 */
int main(void)
{
	char i;
	int j;
	long int k;
	long long int l;
	float m;
	printf("%s %lu %s\n", "Size of a char:", (unsigned long)sizeof(i), "byte(s)");
	printf("%s %lu %s\n", "Size of a int:", (unsigned long)sizeof(j), "byte(s)");
	printf("%s %lu %s\n", "Size of a long int:", (unsigned long)sizeof(k), "byte(s)");
	printf("%s %lu %s\n", "Size of a long long int:", (unsigned long)sizeof(l), "byte(s)");
	printf("%s %lu %s\n", "Size of a float:", (unsigned long)sizeof(m), "byte(s)");
	Return (0);
}
