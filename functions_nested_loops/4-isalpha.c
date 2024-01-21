#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks whether a character is an alphabet or not.
 * @c: The character to check.
 *
 * Return: 0 (always success error: C++ style comments are not allowed in ISO C90 [-Werror]
   26 |     char input;  // Declare input here
      |                  ^)
 */
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
