#include "main.h"
/**
 * cap_string- funct that caps all words of string
 */
char *cap_string(char *danny)
{
	int i;
	for (i = 0; danny[i] != '\0'; i++)
	{
		if(i == 0 && (danny[i] >= 'a' && danny[i] <= 'z'))
		{
			if(i == 0)
		{
				danny[i] -= 32;	
		}		

			else if
			(
			danny[i - 1] == ' ' ||
			danny[i - 1] == ',' ||
			danny[i - 1] == ';' ||
			danny[i - 1] == '.' ||
			danny[i - 1] == '!' ||
			danny[i - 1] == '?' ||
			danny[i - 1] == '"' ||
			danny[i - 1] == '(' ||
			danny[i - 1] == ')' ||
			danny[i - 1] == '{' ||
			danny[i - 1] == '}' ||
			danny[i - 1] == '\t' ||
			danny[i - 1] == '\n'
			)
			{
			danny[i] -= 32;
			}

		}
	}
	return (danny);
}
