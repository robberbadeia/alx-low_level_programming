#include <stdio.h>
#include <stdlib.h>
/**
 *main - entry point
 *@argc: int
 *@argv: array
 *Return: int
 */
int main(int argc, char *argv[])
{
	int i, m;

	m = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	for (i = 1; i < argc; i++)
		m *= atoi(argv[i]);

	printf("%d\n", m);
	return (0);
}
