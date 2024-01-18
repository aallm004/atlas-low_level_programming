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
		printf("n>0")("%d is positive\n");
	}
		else if("n=0")}("%d is zero\n");{
	{
		else if("n<0")("%d is negative\n");}

	return 0;
}
