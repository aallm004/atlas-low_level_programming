
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
		int s = (n % 10);

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		s = (n % 10);

		if (s > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, s;)
		}
		else if (s < 6 && s != 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s;)
		}
			pritf("Last digit of %d is %d and is 0\n", n, s)


		return (0);
