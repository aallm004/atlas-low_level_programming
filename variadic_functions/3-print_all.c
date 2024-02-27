#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * op_printc - prints a char
 * @va_arg: returns value of the next argument in list
 *
 */
void printc(va_list ap)
{
printf("%c", (va_arg(ap, char)));
}

/**
 * op_printi - prints a integer
 * @va_arg: returns value of the next argument in list
 *
 */
void printi(va_list ap)
{
printf("%d", (va_arg(ap, int)));
}

/**
 * op_printf - prints a float
 * @va_arg: returns value of the next argument in list
 *
 */
void printf(va_list ap)
{
printf("%f", (va_arg(ap, double)));
}

/**
 * op_print* - prints a pointer
 * @va_arg: returns value of the next argument in list
 *
 */
void prints(va_list ap)
{
printf("%s", (va_arg(ap, char *)));
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
		{"c", printc},
		{"i", printi},
		{"f", printf},
		{"s", prints},
		{NULL, NULL}
    };
	int i = 0;
	int x = 0;

	while (format[i])
	{
		while ((ops[x].op))
		{		
			if(*(ops[x].op) == format[i])
				(ops[x].f)(ap);
			x++;
		}
		i++;
	}
}
