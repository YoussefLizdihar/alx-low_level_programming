#include "main.h"

/**
* transfer - is the scanner function of the S.S project
* @l: is a char * var
* Return: return what should be returned
*/

char **transfer(char *l)
{
char *t = NULL, *temp = NULL;
char **c = NULL;
int i = 0, j = 0;
if (!l)
return (NULL);
temp = _strdup(l);
t = strtok(temp, DLM);
if (!t)
{
free(l), l = NULL;
free(temp), temp = NULL;
return (NULL);
}
while (t)
{
i++;
t = strtok(NULL, DLM);
}
free(temp), temp = NULL;
c = malloc(sizeof(char *) * (i + 1));
if (c == NULL)
{
free(l), l = NULL;
return (NULL);
}
t = strtok(l, DLM);
while (t)
{
c[j] = _strdup(t);
t = strtok(NULL, DLM);
j++;
}
free(l), l = NULL;
c[j] = NULL;
return (c);
}
