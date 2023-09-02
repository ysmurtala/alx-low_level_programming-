#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - get the length of a prefix substring
 * @s: string to search from
 * @accept: string to search
 * NULL: if no such byte is found
 * Return: number of characterd marched
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *i = accept;

		while (*i != '\0')
		{
			if (*s == *i)
			{
				return (s);
			}
			i++;
		}
		s++;

	}
	return (NULL);
}
