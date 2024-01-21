#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Checks whether a character is an alphabet or not.
 * @c: The character to check.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise.
 */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("%c is an alphabetic character.\n", c);
        return 1;
    }
    else
    {
        printf("%c is not an alphabetic character.\n", c);
        return 0;
    }
}

int main(void)
{
    printf("Enter a character: ");
    scanf("%c", &input);

    _isalpha(input);

    return 0;
}
