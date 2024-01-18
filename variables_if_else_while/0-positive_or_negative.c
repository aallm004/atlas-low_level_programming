#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Assigning a random number to the variable n*/
int main(void)
{
	int n;
	
	srand(time(0));
	n=rand() - RAND_MAX /2;

	if(n>0)
	{
		printf("n>0")("is positive\n")
	printf("n=0")("is zero\n");
	printf("n<0")("is negative\n");

	return 0;
}
