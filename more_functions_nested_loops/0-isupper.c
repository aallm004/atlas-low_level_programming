#include "main.h"
/**
 * isupper(int c)- a function that checks for uppercase character
 *
 * Description: a function that checks for uppercase character
 *
 * Return: 0 (always success)
 */

int _isupper(int c)
{
	if (c >= 41 && c <= 90)
	{
		return (1);
	}	
	else
	{		
		return (0);
	}
}

