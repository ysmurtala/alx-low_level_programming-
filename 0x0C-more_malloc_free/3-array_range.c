#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of int
 * @min: starting int
 * @max: maximum int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int len, i;
	int *a;

	if (min < max)
		return (NULL);
	len = max - min + 1;
	a = malloc(sizeof(int) * len);
	if (!a)
		return (NULL);
	for (i = 0; i < len; i++)
		a[i] = min++;
	return (a);
}

