#include "main.h"

/**
 * string_toupper - changes lowercaseto uppercase in a string
 * @str: string to be changed
 * Return: a pointer that changes string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
	i++;
	}
	return (str);
}
