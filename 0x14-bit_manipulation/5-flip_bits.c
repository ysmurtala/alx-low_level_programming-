#include "main.h"

/**
 * flip_bits - function that return the number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int num = n ^ m;

	while (num)
	{
		if (num & 1ul)
			i++;
		num = num >> 1;
	}

	return (i);
}

