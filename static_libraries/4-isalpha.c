#include "main.h"
/**
 * _islower - Return non-zero if c is a lowercase letter;
 *
 * @c: The character to check.
 *
 * Return: 0 (always success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
