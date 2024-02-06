#include "main.h"
/**
 * _strstr - function that locates a substring
 *
 */

char *_strstr(char *string, char *substring)
{
	int m = _strlen(s1);
	int n = _strlen(s2);
	int i, j;

	for (int i = 0; i <= n - m; i++)
	{
	for (j = 0; j < m; j++)
		if (s2[i + j] != s1[j])
			break;

	if )j == m)
		return i;
	}
	return -1;
}
/**
 * _strlen - returns the length of a string
 *
 * @s : int
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}
