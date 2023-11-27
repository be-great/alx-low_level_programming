#include "main.h"
/**
* error_handler - handlering open the file
* @fd_from: the file 1
* @fd_to: the file 2
* @file1: fd1
* @file2: fd2
*/

void error_handler(int *fd_from, int *fd_to, char *file1, char *file2)
{
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file1);
		exit(98);
	}
	if (*fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file2);
		exit(98);
	}

}
/**
* error_close_handler - closing the files
* @fd_from: the file 1
* @fd_to: the file 2
*/

void error_close_handler(int *fd_from, int *fd_to)
{
	if (close(*fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd_from);
		exit(100);
	}
	if (close(*fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *fd_to);
		exit(100);
	}


}
/**
* main - Entry point
* Description: program that copies the content of a file to another file.
* @ac: number of argument passed
* @argv: list of the argument
* Return: 0 Always (Success)
*/
int main(int ac, char *argv[])
{
	int fd_to, fd_from;

	char buffer[1024];

	size_t bytes_read, bytes_written;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	fd_to   = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(&fd_from, &fd_to, argv[1], argv[2]);
	bytes_read = 1024;
	while (bytes_read == 1024)
	{
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == (size_t)-1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == (size_t)-1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	error_close_handler(&fd_from, &fd_to);
	return (0);
}
