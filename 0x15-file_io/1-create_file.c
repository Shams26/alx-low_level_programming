#include "main.h"

/**
 * create_file - Creates a file
 * @filename: File to create.
 * @text_content: String to be writen into the file
 *
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fo, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fo, text_content, len);

	if (fo == -1 || w == -1)
		return (-1);

	close(fo);

	return (1);
}
