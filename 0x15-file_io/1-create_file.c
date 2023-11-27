#include "main.h"
/**
* create_file - function that create a file
* @filename: name of the file to be created
* @text_content: is a NULL terminated string to be writing to the file
* Return: 1 success -1 if it fail
* The created file must have those permissions: rw-------.
* If the file already exists, do not change the permissions.
* if the file already exists, truncate it
* if filename is NULL return -1
* if text_content is NULL create an empty file
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	size_t bytes_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	bytes_written = write(fd, text_content, strlen(text_content));
	if (bytes_written == (size_t)-1)
		return (-1);

	if (close(fd) == -1)
		return (-1);
	return (1);
}

