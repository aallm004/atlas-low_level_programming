#include "main.h"
#include <stdio.h>
/**
 * description: print numbers from 0 to 9
 *
 * Return (0) always success
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x < 57; x++)
	{
		putchar(x);
	}
	putchar('\n');
}
