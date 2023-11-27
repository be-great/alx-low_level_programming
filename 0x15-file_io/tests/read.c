#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUFFER_SIZE 1024



int main()
{
    // open the file
    int fd = open("filename.txt", O_RDONLY);
    // check for errors
    if (fd == -1)
    {
        perror("Error opening the file");
        return (1);
    }
    // read the data intel end of the file
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;

    while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0) {
        // Process the read data (you can customize this part)
        buffer[bytes_read] = '\0';  // Null-terminate the string
        printf("Read chunk from file: %s\n", buffer);
    }
    // check the read file error 
    if (bytes_read == -1)
    {
        perror("Error reading the file");
        close(fd);
        return (1);
    }
    // close the file
    if(close(fd) == -1)
    {
        perror("Error closing the file\n");
        return (1);
    }
    return (0);
}