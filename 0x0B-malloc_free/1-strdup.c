#include "main.h"

/**
 * _strdup - coy string to newly allocated space in memory
 * @str: string to copy new memory
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	int i;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\n'; i++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (i = 0; str[i] != '\n'; i++)
		copy[i] = str[i];

	return (copy);

}
