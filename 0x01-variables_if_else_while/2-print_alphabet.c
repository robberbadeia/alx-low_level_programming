#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*
	 *Declare a variable and initialize it 
	 * */
	char alpha = 'a';

	/*
	 * use a while loop to print alpha variable char
	 */

	while (alpha <= 'z')
	{
		putchar(alpha);

		alpha++;
	
	}

	putchar('\n');
	return (0);
}
