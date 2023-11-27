#include "main.h"
/**
* read_textfile - function that reads a text file and prints it to
* the POSIX standard output. POSIX =read(STDIN_FILENO, ... vs read(0, ...)
* @filename: the filename we should read from
* @letters: where letters is the number of letters it should read and print
* Return:
* 0- the actual number of letters it could read and print
* 1- if the file can not be opened or read, return 0
* 2- if filename is NULL return 0
* 3- if write fails or does not write the expected amount of bytes, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	size_t x, y;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(letters) * (letters + 1));
	if (buffer == NULL)
	{
		return (0);
	}
    /*letters : The maximum number of bytes to read.*/
	x = read(fd, buffer, letters);
    /* x      : number of byte to write*/
	y = write(STDOUT_FILENO, buffer, x);
	if (close(fd) == -1)
		return (0);
	free(buffer);
	return (y);
}
