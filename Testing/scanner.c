#include "main.h"

/**
* scanner - is the scanner function of the S.S project
* Return: return what should be returned
*/

char *scanner(void)
{
char *line = NULL;
size_t len = 0;
ssize_t nread;
if (isatty(STDOUT_FILENO))
{
ppr("$ ", 2);
}
nread = getline(&line, &len, stdin);
if (nread == -1)
{
free(line);
line = NULL;
return (NULL);
}
return (line);
}
