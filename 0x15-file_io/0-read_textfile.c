#include "main.h"
/**
 * read_textfile- a function that reads a text file and prints it to POSIX
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *       : 0 when function fails or filename = NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	ptr = malloc(sizeof(char) * letters);
	t = read(fd, ptr, letters);
	w = write(STDOUT_FILENO, ptr, t);
	free(ptr);
	close(fd);
	return (w);
}
