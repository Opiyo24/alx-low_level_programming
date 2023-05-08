#include "main.h"

/**
 * append_text_to_file - Appends text in file
 * @filename: pointer to the file name
 * @text_content: string to add to file
 *
 * Return: -1 in case of error
 * If the file does not exist the user lacks write permissions - -1
 * 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, r, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	r = write(p, text_content, len);

	if (p == -1 || r == -1)
		return (-1);

	close(p);

	return (1);
}
