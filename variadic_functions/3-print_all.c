#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * op_printc - prints a char
 * @va_arg: returns value of the next argument in list
 *
 */
void print_c(va_list ap, char *c)
{
	printf("%s%c", c, (va_arg(ap, int)));
}

/**
 * op_printi - prints a integer
 * @va_arg: returns value of the next argument in list
 *
 */
void print_i(va_list ap, char *c)
{
	printf("%s%d", c, (va_arg(ap, int)));
}

/**
 * op_printf - prints a float
 * @va_arg: returns value of the next argument in list
 *
 */
void print_f(va_list ap, char *c)
{

	printf("%s%f", c, (va_arg(ap, double)));
}

/**
 * op_print* - prints a pointer
 * @va_arg: returns value of the next argument in list
 *
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
 * @char: pointer
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
