#include "main.h"

/**
 * _abs - print the absolute value of a number
 * @r: function parameter
 * Return: -r or r
 */
int _abs(int r)
{
	if (r < 0)
		return (-r);
	else if (r >= 0)
	{
		return (r);
	}

	return (0);
}
