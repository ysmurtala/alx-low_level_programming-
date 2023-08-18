#include "main.h"

#ifndef PUTCHAR_H
#define PUTCHAR_H

int _putchar(char c);

#endif /* PUTCHAR_H */

/**
 * print_numbers - print numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		_putchar(i + '0');

	_putchar('\n');
}
