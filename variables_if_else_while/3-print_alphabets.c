#include <stdio.h>
/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: 0 (always success)
 */
int main(void)
{
	char alphabet = 'a' 'A';

	while (alphabet <= 'z' 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar ('\n');
	return (0);
}
