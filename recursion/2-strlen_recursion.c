#include "main.h"
/**
 * strlen_recursion - function that returns the length of a string
 *
 * @s: string
 */

int _strlen_recursion(char *s)
{
	int x = 0;
	
	if (*s)
	{
                s++;
                x += _strlen_recursion(s);
        }
	return (x);
}
