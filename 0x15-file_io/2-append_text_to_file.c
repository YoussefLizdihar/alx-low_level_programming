#include <stdio.h>
#include "main.h"

/**
 * read_textfile - func to know str len
 * @filename: file name we want to R&P
 * @letters: Num of letters in file
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content);
{

ssize_t count = 0;
ssize_t bytes_read;
size_t bytes_written;

int fd;
if (text_content = NULL)
{
if (filename == NULL)
return (-1);
else
{
fd = open(filename, O_ APPEND);
if (fd == -1)
return (-1);

while ((bytes_read = read(fd, text_content, sizeof(text_content))) > 0)
{
bytes_written = write(STDOUT_FILENO, text_content, bytes_read);
if ((size_t)bytes_written != (size_t)bytes_read)
{
close(fd);
return (0);
}
count += bytes_written;
if ((size_t)count >= letters)
break;
}

close(fd);
return (count);
}
}
