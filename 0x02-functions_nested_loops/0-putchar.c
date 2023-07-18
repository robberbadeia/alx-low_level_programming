#include "main.h"
/**
 *main - Entry point
 *
 *Return: nothing, return void
 */
void print_putchar(void)
{
	char putchar[] = "_putchar";

	for (int i = 0; i <= 7; i++)
	{
		_putchar(putchar[i]);
	}
	return (0);
}
