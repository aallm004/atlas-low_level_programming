#include <stdlib.h>
#include <time.h>
/**
 *  main - assign a random number to the variable n
 *
 *  Return: 0 (always success)
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;

		if ((n % 10) > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, n % 10;
		}
		else if (n == 0)
			("Last digit of %d and is 0\n", (n));
		else 

		
		return (0);
