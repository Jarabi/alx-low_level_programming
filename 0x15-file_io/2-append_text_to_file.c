#include "main.h"

/**
 * append_text_to_file - appends text at the end a file.
 * @filename: name of the file
 * @text_content: null-terminated string to add at the end of the file
 *
 * Return: 1 on success; -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr_count = 0, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
	{
		wr_count = write(fd, &text_content[i], 1);

		if (wr_count == -1)
		{
			close(fd);
			return (-1);
		}
		i++;
	}
	close(fd);
	return (1);
}
