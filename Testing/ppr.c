#include "main.h"

/**
* ppr - is the function that prints
* @len: this is an arg
* @c: this is an arg
* Return: return the value
*/

void ppr(char *c, size_t len)
{
write(STDOUT_FILENO, c, len);
}

/**
* printStringArray - is the main function of S.S project
* @strArray: is the String Array argument
* Return: return what should be returned
*/

void printStringArray(char **strArray)
{
while (*strArray != NULL)
{
ppr(*strArray, strlen(*strArray));
strArray++;
}
}

/**
* imFree - is the one function of S.S project functions
* @sa: is the String Array argument
* Return: return what should be returned
*/

void imFree(char **sa)
{
int x = 0;
if (sa == NULL)
{
return;
}
while (sa[x])
{
free(sa[x]);
sa[x] = NULL;
}
free(sa);
sa = NULL;
}
