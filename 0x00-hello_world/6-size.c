#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int k;
	float f;

	printf("Size of a char: %uz byte(s)", sizeof(c));
	printf("Size of an int: %uz byte(s)", sizeof(i));
	printf("Size of a long int: %uz byte(s)", sizeof(l));
	printf("Size of a long long int: %uz byte(s)", sizeof(k));
	printf("Size of a float: %uz byte(s)", sizeof(f));
}
