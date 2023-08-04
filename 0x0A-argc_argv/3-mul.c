#include <stdio.h>
/**
 *main - entry point
 *@argc: int
 *@argv: array
 *Return: int
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
