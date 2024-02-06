/**
 * _strstr - function that locates a substring
 *
 */

char *_strstr(char *string, char *substring)
{
	int i, l1, l2;
	int count = 0;
	l1 = _strlen ( string );
	l2 = _strlen ( substring );

	for (i = 0; i < l1 - l2 + 1; i++)
	{
		if (strstr (string + i, substring) == string + i)
			{
			count++;
			i = i + l2 - 1;
			}
	}
	return (count);
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
