#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - function that selects the correct function
 *
 * @s: operator passed as argument to program
 *
 * Return: NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if ((ops[i].op) == s[0] && s[1] == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
