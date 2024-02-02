#include "main.h"
/**
 * leet - funct that encodes a string into 1337
 *
 */

char *leet(char *s)
{
	int i = 0;
	int x;
	char num[5] = '4', '4', '3', '3', '0', '0', '7', '7', '1', '1'
	char let[5] = 'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'

	while (s[i])
	{
		for (x = 0; x < 10; x++)
		{
			if(s[i] == let[i])
			{
				s[i] = num[x];
			}
		}
		i++;
	}

	return (s);
}	
