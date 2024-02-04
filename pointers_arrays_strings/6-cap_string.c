#include "main.h"
/**
 * cap_string- funct that caps all words of string
 *
 *@ptr : pointer
 * Return: a
 */

char *cap_string(char *ptr)
{
	int a;
	char find[13] = " \t\n,;.!?\"(){}";
	int howmanytimesdidwemoveit = 0;

	if (*ptr >= 'a' && *ptr <= 'z')
		*(ptr) -= ('a' - 'A');

	while (*ptr)
	{
		for (a = 0; a < 13; a++)
		{
			if (find[a] == *ptr)
			{
				if (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
				{
					*(ptr + 1) -= ('a' - 'A');
				}
			}
		}
		ptr++;
		howmanytimesdidwemoveit--;
	}
	ptr += howmanytimesdidwemoveit;
	return (ptr);
}
