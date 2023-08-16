#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - Function
 *@argc: input
 *argv: input
 *Return: int
 */
int main(int argc, char **argv)
{
	int i, j;
	int (*f)(int, int);

	i = j = 0;
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1 )
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	f = get_op_func(argv[2]);

	printf("%d\n", f(i, j));

	return (0);
}
