#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
*	script to print if the number is positive or negative or zero
*	retur zero if success
*/
/* main function to print numbers */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}else if(n < 0)
	{
		printf("%d is negative\n", n);
	}else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
