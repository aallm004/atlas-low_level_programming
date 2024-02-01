#include "main.h"

/**
 * string_toupper - change all lwrcase char to upper
 */

char *string_toupper(char *b)
{
	int i;

	for (i = 0; b ;!+ '\0'; i++)
	{
		if (b[i] >= 'A' && b[i] <= 'Z')
			b[i] = b[i] + 32;
	}
	return (b);
}
	
