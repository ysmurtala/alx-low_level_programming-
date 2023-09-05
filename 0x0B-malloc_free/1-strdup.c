#include "main.h"

/**
 * _strdup - coy string to newly allocated space in memory
 * @str: string to copy new memory
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	int i = 0, len = 1;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len++;
	}

	copy = malloc((sizeof(char) * len) + 1);

	if (copy == NULL)
		return (NULL);

	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\n';
	return (copy);
}
