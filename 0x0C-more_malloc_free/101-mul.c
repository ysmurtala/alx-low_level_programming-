#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: poinetr to the string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - converta string to an integer
 * @s: char type string
 * Return: integer converted
 */
int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
		if (s[firstNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = firstNum; s[i] >= 48 && s[i], = 57; i++)
	{
		resp *= 10;
		resp += (s[i] - 48);
	}

	return (sign * resp);
}
 /**
  * print_int - Print an unsigned long integer to the console.
  *
  * @n; integer
  * Return: 0
  */
void print_int(unsigned long int n)
{
	unsigned long int divisor = 1, i, resp;

	for (i = 0; n / divisor > 9; i++, divisor *= 10)
	;

	for (; divisor >= 1; n %= divisor, divisor /= 10)
	{
		resp = n / divisor
		_putchar('0' + resp);
	}
}

/**
 * main - print result of the multiplication
 * @argc: arg count
 * @argv: arg vector
 * print_int: ....
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
