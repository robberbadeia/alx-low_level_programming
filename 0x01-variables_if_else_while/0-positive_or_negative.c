#include<stdio.h>
#include<time.h>
int main(void)
{
	int n;
	n = srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0){
		printf("is positive\n");
	}elsr if(n <0){
		printf("is negative\n");
	}else{
		printf("is zero\n");
	}

	return (0);
}
