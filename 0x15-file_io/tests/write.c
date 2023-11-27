#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024



int main()
{
    // open the file
    // t_runc => overwrite the file if it's exist
    int fd_to = open("filename0.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    int fd_from = open("filename.txt", O_RDONLY);
    // check for errors
    if (fd_to == -1 || fd_from == -1)
    {
        perror("Error opening the file");
        return (1);
    }
    // read the data intel end of the file
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read =1, bytes_written;

    while (bytes_read> 0) {
        // Process the read data (you can customize this part)
        // bytes_read => number of bytes reading 
        bytes_read = read(fd_from, buffer, sizeof(buffer));
        // write operation
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1)
        {
            perror("Error writing to the file");
            close(fd_to);
            close(fd_from);
            return (1);
        }
        buffer[bytes_read] = '\0';  // Null-terminate the string


        printf("Read chunk from file: %s\n", buffer);
    }
    // check the read file error 
    if (bytes_read == -1)
    {
        perror("Error reading the file");
        close(fd_to);
        close(fd_from);
        return (1);
    }
    // close the file
    if(close(fd_to) == -1 || close(fd_from) == -1)
    {
        perror("Error closing the file\n");
        return (1);
    }
    return (0);
}