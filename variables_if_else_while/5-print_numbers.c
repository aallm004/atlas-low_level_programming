#include <stdio.h>
/**
 * main - program that prints al singe digit numbers etc
 *
 * Return: 0 (always success)
 */

int main(void)
{
        int x;

        for (x = 48; x < 58; x++)
        {
                putchar(x);
                if (x < 57)
                {
                        purchar(44);
                        putchar(32);
                }
        }
        putchar('\n');
        return (0);
}
