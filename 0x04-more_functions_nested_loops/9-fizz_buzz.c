#include "main.h"
#include <stdio.h>
/*
 * fizz-buzz - Fuction to prints
 * fizz: if the number divided by 3
 * buzz if the number divided by 5
 * fizzbuzz if the number divided by 3 & 5
 * Return: 0 if success
*/

int fizz_buzz(void)
{
        int i;
        
	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("%s ", "FizzBuzz");
		}
		else if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("%s ", "Fizz");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{ 
			if (i == 100)
				printf("%s", "Buzz");
			else
				printf("%s ", "Buzz");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
