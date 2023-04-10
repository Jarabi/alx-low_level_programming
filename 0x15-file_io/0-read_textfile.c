#include "main.h"
int open_file_ro(const char *f);

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: number of letters it should read and print
 *
 * Return: Number of letters read or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_count, wr_count = 0, i = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/* open file in read-only */
	fd = open_file_ro(filename);
	
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_count = read(fd, buffer, letters);

	if (read_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	while (i < read_count)
	{
		wr_count = write(STDOUT_FILENO, &buffer[i], 1);
		if (wr_count == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		i++;
	}
	free(buffer);
	close(fd);
	return (read_count);
}

/**
 * open_file_ro - opens file in read-only
 * @f: file to open
 *
 * Return: file descriptor
 */
int open_file_ro(const char *f)
{
	int fd;

	fd = open(f, O_RDONLY);
	return (fd);
}
