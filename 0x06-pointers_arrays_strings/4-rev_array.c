#include "main.h"
/**
 * reverse_array - reverse the content of an array of integers
 * @a: the array of integers
 * @n: number of bytes
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int j, i;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		j = a[n - 1 -  i];
		a[n - 1 - i] = a[i];
		a[i] = j;
	}

}
