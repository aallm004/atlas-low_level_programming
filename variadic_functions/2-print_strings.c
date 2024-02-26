#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by new line
 * @separator: string
 * @n: int
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("nil");
		if (s != NULL)
			printf("%s", s);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
