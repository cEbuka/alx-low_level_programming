#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct printer - stores symbol and print function match
 * @symbol: symbol of format
 * @print: prints symbol
 */

typedef struct printer
{
	char *symbol;
	void(*print)(va_list args);
}
printer_t;

void print_all(const char * const format, ...);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);


#endif
