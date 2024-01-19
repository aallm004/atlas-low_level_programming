#include <stdio.h>
/**
 * main - print all possible combos of single-digit numbers.
 *
 * Return: 0 (always success)
 */
int main(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
