#include "main.h"
/**
 * _islower - return non-zero if c is a lowercase letter;
 *
 * Return: 0 (always success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	return (0);
}
