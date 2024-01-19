#include <stdio.h>
/**
 * main - print numbers of base 16 lowercase
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 15; num++)
	{
		printf("%x", num);
	}
	printf("\n");
	return (0);
}
