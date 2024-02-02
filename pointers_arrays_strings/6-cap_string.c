#include "main.h"

/**
 * cap_string- funct that caps all words of string
 */

char *cap_string(char *b)
{
	int i;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == ' '
			b[i] == ','
			b[i] == ';'
			b[i] == '.'
			b[i] == '!'
			b[i] == '?'
			b[i] == '"'
			b[i] == '('
			b[i] == ')'
			b[i] == '}'
			b[i] == '{'
		{
			i++;
			if (b[a] >= 'A' && b[a] <= 'Z')
				i++;
			else if (b[a] >= 'a' && b[a] <= 'z')
				b[a] = b[a] - 32;
			a--;
		}
		else if (b[a] >= 'a' && b[a] <= 'z')
			b[a] = b[a] - 32;
	}
	return (b);
}
