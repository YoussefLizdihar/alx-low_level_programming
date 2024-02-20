#include <stdio.h>
#include "main.h"

/**
 * read_textfile - func to know str len
 * @filename: file name we want to R&P
 * @letters: Num of letters in file
 * Return: int
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

ssize_t count = 0;
char buffer[1024];
ssize_t bytes_read;
size_t bytes_written;
int fd;
if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
{
bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd);
return (0);
}
count += bytes_written;
if (count >= letters)
break;
}

close(fd);
return (count);
}
