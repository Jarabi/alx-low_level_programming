#include "main.h"
int open_the_damn_files(char *src, char *dest);
int read_source(int src_fd, int dest_fd, char *src, char *dest);
int write_dest(char *buffer, int dest_fd, int read_count, char *dest);

/**
 * main - copies the content of a file to another file
 * @argc: arguments count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char *src_f, *dest_f;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src_f = argv[1];
	dest_f = argv[2];

	open_the_damn_files(src_f, dest_f);
	exit(0);
	return (0);
}

/**
 * open_the_damn_files - open source and destination files
 * to read from and write to respectively
 * @src: file to read data from
 * @dest: file to copy data to
 *
 * Return: Always 0.
 */
int open_the_damn_files(char *src, char *dest)
{
	int src_fd, dest_fd, perm = 0664;

	/* open source file */
	src_fd = open(src, O_RDONLY);

	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	/* open dest file */
	dest_fd = open(dest, O_CREAT | O_EXCL | O_WRONLY, perm);

	if (dest_fd == -1)
	{
		dest_fd = open(dest, O_WRONLY | O_TRUNC);

		if (dest_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest);
			exit(99);
		}
	}

	read_source(src_fd, dest_fd, src, dest);

	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
	return (0);
}

/**
 * read_source - read data from source file
 * @src_fd: file descriptor of source file
 * @dest_fd: file descriptor of destination file
 * @src: source file
 * @dest: destination file
 *
 * Return: Always 0.
 */
int read_source(int src_fd, int dest_fd, char *src, char *dest)
{
	int read_count, buffer_size = 1024;
	char buffer[1024];

	/* read source file */
	read_count = read(src_fd, buffer, buffer_size);

	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	write_dest(buffer, dest_fd, read_count, dest);

	while (read_count)
	{
		read_count = read(src_fd, buffer, buffer_size);

		if (read_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
			exit(98);
		}

		if (read_count == 0)
			return (0);

		write_dest(buffer, dest_fd, read_count, dest);
	}
	return (0);
}

/**
 * write_dest - write to destination file
 * @buffer: buffer
 * @dest_fd: file descriptor of destination file
 * @read_count: size of data read
 * @dest: desination file to copy data to
 *
 * Return: Always 0;
 */
int write_dest(char *buffer, int dest_fd, int read_count, char *dest)
{
	int wr_count, i = 0;

	while (i < read_count)
	{
		wr_count = write(dest_fd, &buffer[i], 1);

		if (wr_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest);
			exit(99);
		}
		i++;
	}
	return (0);
}
