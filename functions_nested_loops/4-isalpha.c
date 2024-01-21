#include "main.h"
/**
 * _isaplha - Checks whether a character is an alphabet or not.
 *
 * Return: 0 (always success)
 */
#include <stdio.h>
int _isalpha(int c)
{
	char c;
	printf("c");
	scanf(%c, &c);

	if ((c >= 'a' && c <= 'z') || (c>= 'A' && c<= 'Z'))
		printf("%c is an alphabetic character.", c);
	else
		printf("%c is not an alphabetic character.", c);

	return (0);
}
