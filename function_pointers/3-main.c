#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * main - the main
 *
 * @argc: counts
 * @argv: vectorial
 *
 * Return: 98, 99, 100
 */

int main(int argc, char argv)
{
	int a, b;
	
	if (argc != 4)
	{
		printf("Error\n")
		return (98)
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fonc = get_op_func(argv [2]);
	if (fonc == NULL)
	{
		printf("Error\n");
		return (99);
	}
	
	if (

}
