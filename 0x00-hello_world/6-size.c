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

	printf("Size of a char: %uz byte(s)\n", sizeof(c));
	printf("Size of an int: %uz byte(s)\n", sizeof(i));
	printf("Size of a long int: %uz byte(s)\n", sizeof(l));
	printf("Size of a long long int: %uz byte(s)\n", sizeof(k));
	printf("Size of a float: %uz byte(s)\n", sizeof(f));

	return (0);
}
