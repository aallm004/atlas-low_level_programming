#include "main.h"
/**
 * cap_string- funct that caps all words of string
 */
char *cap_string(char *i)
{
	int x = 0;
	char find[13]= 44, 32, 9, 10, 59, 46, 21, 63, 35, 40, 41, 123, 125;

	while (i[x])
	{
		for (x = 0; x < 13; x++)
		{
			if (x[i] == find[x])
			
				x++;
		}
	}

	return (i);
}
