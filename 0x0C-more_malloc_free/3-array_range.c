#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of int
 * @min: minimun array
 * @max: maximum array
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *a;

	if (min < max)
	{
		return (NULL);
	}

	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		a[i - min] = 1;
	}
	return (a);
}

