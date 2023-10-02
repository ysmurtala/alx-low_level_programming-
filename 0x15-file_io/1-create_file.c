#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: -1 If the function fai.
 *         Otherwise return 1.
 */
int create_file(const char *filename, char *text_content)
{
	int d, a, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	a = write(d, text_content, len);

	if (d == -1 || a == -1)
		return (-1);

	close(d);

	return (1);
}

