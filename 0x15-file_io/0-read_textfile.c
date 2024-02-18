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
if(filename == NULL)
return (0);
FILE f = fopen(filename, "r");
int count;
char s = fgetc(f);
while (s != EOF)
{
if (count > letters)
return (0);
putchar("%c", s);
s = fgetc(f);
count++;
}

fclose(f);
return (letters)
}
