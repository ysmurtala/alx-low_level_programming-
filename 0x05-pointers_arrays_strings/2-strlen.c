#include "main.h"

/**
 * _strlen - length of a string
 * @s: string to be counted
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int count;

	for (i = 0 ; s[1] != '\0' ; i++)
		count++;
	return (count);
}
