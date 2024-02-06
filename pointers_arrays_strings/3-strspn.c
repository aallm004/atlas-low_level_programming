/**
 * _strspn - gets the length of a prefix substring
 *
 */

unsigned int _strspn(char *s1, char *s2)
{
	const char *s1;
	register const char *s2;
	{
	register cconst char *p = s1, *spanp;
	register char c, sc;

	c = *p++;
	for (spanp = s2; (sc = *spanp++) != 0;)
		if (sc == c)
			goto cont;
	return ( - 1 - s1);
}
