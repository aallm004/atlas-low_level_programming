#include <stdio.h>
/**
 * main - print alphabet in lowercase and uppercase
 *
 * Return: 0 (always success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet ='A';

	while (alphabet = 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar ('\n');
	return (0);
}
