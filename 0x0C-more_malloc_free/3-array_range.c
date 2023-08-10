#include "main.h"
#include <stdio.h>
#include <stdlib>
/**
 *array_range - Function
 *@min: int
 *@max: int
 *Return: int
 */
int *array_range(int min, int max)
{
	int *p;
	int i = 0;

	if (min > max)
		return (NULL);

	i = max - min;

	p = malloc(i * sizeof(int));

	if (p == NULL)
		return (NULL);
	return (p);
}
