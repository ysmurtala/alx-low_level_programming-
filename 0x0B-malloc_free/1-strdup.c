#include "main.h"

/**
 * _strdup - coy string to newly allocated space in memory
 * @str: string to copy new memory
 * Return: pointer to new memory
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	copy = malloc((sizeof(char) * i) + 1);

	if (copy == NULL)
		return (NULL);

	while (a < i)
	{
		copy[a] = str[a];
		a++;
	}

	copy[a] = '\n';
	return (copy);
}
