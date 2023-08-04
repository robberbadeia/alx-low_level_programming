#include <stdlib.h>
#include <stdio.h>
/**
 *main - entry point
 *@argc: int
 *@argv: int
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	sum = 0;
	if (argc == 1)
		printf("%d\n", 1);
	for (i = 1; i < argc; i++)
	{
		for (j = 0; arg[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}