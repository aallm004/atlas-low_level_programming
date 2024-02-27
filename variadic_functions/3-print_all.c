#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_c - prints a char
 * @ap: returns value of the next argument in list
 * @c: pointer
 */
void print_c(va_list ap, char *c)
{
	printf("%s%c", c, (va_arg(ap, int)));
}

/**
 * print_i - prints a integer
 * @ap: returns value of the next argument in list
 * @c: pointer
 */
void print_i(va_list ap, char *c)
{
	printf("%s%d", c, (va_arg(ap, int)));
}

/**
 * print_f - prints a float
 * @ap: returns value of the next argument in list
 * @c: pointer
 */
void print_f(va_list ap, char *c)
{

	printf("%s%f", c, (va_arg(ap, double)));
}

/**
 * print_s - prints a pointer
 * @ap: returns value of the next argument in list
 *@c: pointer
 */
void print_s(va_list ap, char *c)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(nil)";

	printf("%s%s", c, s);
}

/**
 * print_all - function that prints anything
 * @format: format
 */

void print_all(const char * const format, ...)
{
	va_list ap;

	op_t ops[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};
	int i = 0;
	int x = 0;
	char *p;

	p = "";

	va_start(ap, format);

	while (format && format[i])
	{
		x = 0;
		while ((ops[x].op))
		{
			if (*(ops[x].op) == format[i])
			{
				(ops[x].f)(ap, p);
				p = ", ";
			}
			x++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
