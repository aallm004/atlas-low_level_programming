#include "main.h"
/**
 * cap_string- funct that caps all words of string
 */
char *cap_string(char *a)
{
	int x;

	for (x = 0; a[x] != '\0'; x++)
	{

		if (a[x] >= 'a' && a[x] <= 'z')
		{
			if (x == 0)
			{
				a[x] -= 32;
			}

			else if
			(
			a[x - 1] == '\n' ||
			a[x - 1] == '\t' ||
			a[x - 1] == ',' ||
			a[x - 1] == ' ' ||
			a[x - 1] == ';' ||
			a[x - 1] == '.' ||
			a[x - 1] == '!' ||
			a[x - 1] == '?' ||
			a[x - 1] == '"' ||
			a[x - 1] == '(' ||
			a[x - 1] == ')' ||
			a[x - 1] == '{' ||
			a[x - 1] == '}'
			)
			{
			a[x] -= 32;
			}
		}
	}
	return (a);
}
