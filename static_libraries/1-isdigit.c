#include "main.h"

/**
 * _isdigit- check for digit 0 through 9
 *
 * @c: The character to be checked.
 *
 * Return: 0 (always success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
