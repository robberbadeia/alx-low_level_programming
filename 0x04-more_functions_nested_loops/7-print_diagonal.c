nclude "main.h"
/*
 *print_diagonal - Function to print diagonal line
 @n: int number variable
*/
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;
		
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');	
			}
			_putchar('\\');
			_putchar('\n');
		}	
	}
	_putchar ('\n');



}
