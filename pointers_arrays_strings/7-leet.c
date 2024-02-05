#include "main.h"
/**
 * leet - funct that encodes a string into 1337
 * @s : pointer
 * Return: (s)
 */

char *leet(char *s)
{
	int howmanytimesdidwemoveit = 0;
	char MDA[5][3] = {
		{'a', 'A', '4'}, 
		{'e', 'E', '3'}, 
		{'o', 'O', '0'}, 
		{'t', 'T', '7'}, 
		{'l', 'L', '1'}};
	int r;

	while(*s)
	{
		for (r=0; r<=4; r++)
		{
			if((MDA[r][0] == *s) || (MDA[r][1] == *s))
				*s = MDA[r][2];
		}

		s++;
		howmanytimesdidwemoveit--;

	}
	s += howmanytimesdidwemoveit;
	return (s);
}
