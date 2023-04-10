#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to be created
 * @text_content: null-terminated string to write to file
 *
 * Return: 1 on success; -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, wr_count = 0, mode = 0600;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (fd < 0)
	{
		/* if file already exists */
		if (errno == EEXIST)
		{
			/* open without O_EXCL */
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		return (-1);
	}

	while (text_content[i] != '\0')
	{
		wr_count = write(fd, &text_content[i], 1);

		if (wr_count == -1)
			return (-1);
		i++;
	}
	close(fd);
	return (1);
}
