#include <stdio.h>
/**
 * main - prints alphabet in lowercase with exceptions
 *
 * Return: 0 (always success)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z'){
		if (alphabet != 'e' || alphabet != 'q') {
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar ('\n');
	return (0);
}
