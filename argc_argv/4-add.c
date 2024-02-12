#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int isnumber(char *ptr);
/**
 * main - program that adds positive numbers
 * @argv: count
 * @argv: value
 *
 * Return: Always 0 (always success)
 */

int main(int argc, char *argv[])
{
        int i = 1;
	int res = 0;

	for (; (i < argc); i++)
	{
		if (isnumber(argv[i]))
			res += (atoi(argv[i]));
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", res);
	return (0);
}

/**
 * isnumber - is it a number
 * @ptr: point
 *
 * Return: 0 if not num 1 if num
 */

int isnumber(char *ptr)
{
        while (*ptr)
        {
		if (!isdigit(*ptr))
			return (0);
		ptr++;
	}
	return (1);
}
