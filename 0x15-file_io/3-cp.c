#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for the cp program
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, error code on failure
 */
int main(int argc, char *argv[])
{
    int src_fd, dest_fd;
    ssize_t read_count, write_count;
    char buffer[1024];

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    src_fd = open(argv[1], O_RDONLY);
    if (src_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (dest_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(src_fd);
        exit(99);
    }

    do
    {
        read_count = read(src_fd, buffer, 1024);
        if (read_count == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            close(src_fd);
            close(dest_fd);
            exit(98);
        }

        write_count = write(dest_fd, buffer, read_count);
        if (write_count == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            close(src_fd);
            close(dest_fd);
            exit(99);
        }
    } while (read_count == 1024);

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

