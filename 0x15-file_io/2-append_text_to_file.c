#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - func to know str len
 * @filename: file name we want to R&P
 * @text_content: Num of letters in file
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
size_t len = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

while (text_content[len] != '\0')
len++;

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

bytes_written = write(fd, text_content, len);
if (bytes_written == -1)
{
close(fd);
return (-1);
}

close(fd);
return (1);
}
