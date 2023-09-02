#include "main.h"

/**
 * _isdigit - this checks for digit from 0 through 9
 * @c: function parameter
 * Return: success 1 failure 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
