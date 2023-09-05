#include "main.h"

/**
 * _strdup - coy string to newly allocated space in memory
 * @str: string to copy new memory
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	copy[len] = '\n';
	return (copy);
}
