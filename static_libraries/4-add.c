#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argv: count
 * @argv: value
 *
 * Return: Always 0 (always success)
 */

int main(int argc, char *argv[])
{
        int i = 1;

        if(i >=


}

int isnumber(char *ptr)
{
        while (*ptr)
        {
		if(!isdigit(*ptr))
			return (0);
		ptr++;
	}
	return (1);
}	
