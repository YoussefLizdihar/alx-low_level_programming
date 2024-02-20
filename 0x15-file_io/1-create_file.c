#include <stdio.h>
#include "main.h"

/**
 * create_file - func to know str len
 * @filename: file name we want to R&P
 * @text_content: NULL terminated string to write to the file
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
FILE *fptr;
int i = 0;

if (filename == NULL)
return (-1);

fptr = fopen(filename, "w");
if (fptr == NULL)
return (-1);

if (text_content != NULL)
{
while (text_content[i] != "/0")
{
fputs(fptr, text_content[i]);
i++;
}
}
else
{
return (-1);
}

fclose(fptr);
}
