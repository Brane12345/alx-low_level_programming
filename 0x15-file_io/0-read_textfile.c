#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

/**
 * read_textfile - A function that reads a text file and
 *	prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t nread, nwritten;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	nread = read(fd, buf, letters);

	if (nread == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[nread] = '\0';

	nwritten = write(STDOUT_FILENO, buf, nread);
	if (nwritten == -1 || nwritten != nread)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (nwritten);
}
