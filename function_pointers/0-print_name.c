#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: name to be printeid
 * @f: pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

