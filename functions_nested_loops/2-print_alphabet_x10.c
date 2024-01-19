#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
    for (int i = 0; i < 10; i++) {
        char alphabet = 'a';

        while (alphabet <= 'z') {
            _putchar(alphabet);
            alphabet++;
        }

        _putchar('\n');
    }
}
