#include <stdio.h>
#include "main.h"

/**
 * main - Prints name
 * @argc: count
 * @argv: value
 * @i: int
 *
 * Return: Always 0 (always success)
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
