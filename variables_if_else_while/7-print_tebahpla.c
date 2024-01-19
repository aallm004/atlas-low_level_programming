#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: 0 (always success)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar ('\n');
	return (0);
}
