/**
 * _puts_recursion - function that prints a string followed by new line
 *
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		puthchar('\n');
		return;
	}
	_putchar(s);i
	s++;
	_puts_recursion(s);
}
