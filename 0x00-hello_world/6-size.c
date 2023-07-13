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
	float f;
	double d;

	printf("Size of a char: %uz byte(s)", sizeof(c));
	printf("Size of an int: %uz byte(s)", sizeof(i));
	printf("Size of a long: %uz byte(s)", sizeof(f));

	printf("Size of a char: %uz byte(s)", sizeof(char));
	printf("Size of a char: %uz byte(s)", sizeof(char));

	return (0);
}
