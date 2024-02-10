#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: count
 * @argv: value
 *
 * Return: Always 0 (always success)
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("error");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
