#include "main.h"
/**
 * _isupper- a function that checks for uppercase character
 *
 * @c: The character to be checked.
 *
 * Description: a function that checks for uppercase character
 *
 * Return: 0 (always success)
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
