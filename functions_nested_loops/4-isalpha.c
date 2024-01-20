#include <stdio.h>
/**
 * _isaplha - Checks whether a character is an alphabet or not.
 *
 * Return: 0 (always success)
 */
int _isalpha(int c)
{
	char testChar = 'A';

	if (_isalpha(testChar))
		printf("%c is an alphabetic character.\n", testChar);
	else
		printf("%c is not an alphabetic character.\n", testChar);

	return (0);
}
