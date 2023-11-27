# 0x15. C - File I/O
    
    How to create, open, close, read and write files
    What are file descriptors
    What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
    How to use the I/O system calls open, close, read and write
    What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
    What are file permissions, and how to set them when creating a file with the open system call
    What is a system call
    What is the difference between a function and a system cal

## man or help
- open
- close
- read
- write
- dprintf

# Files
|File|Description|
|---|---|
|0-read_textfile | function that reads a text file and prints it to
* the POSIX standard output. POSIX =read(STDIN_FILENO, ... vs read(0, ...)| 
|1- reate_file  ||
|2-append_text_to_file| |
|3-cp| |

## Run

    $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a