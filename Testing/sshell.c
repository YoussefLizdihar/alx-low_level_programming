#include "main.h"

/**
* main - is the main function of S.S project
* @ac: is the argument counter variable
* @av: is the argument vector variable
* Return: return what should be returned
*/

int main(int ac, char **av)
{
char *l = NULL, **c = NULL;
int i = 0;
(void) ac;
while (1)
{
l = scanner();
if (l == NULL)
{
if (isatty(STDIN_FILENO))
{
ppr("\n", 1);
}
return (i);
}
c = transfer(l);
if (c == NULL)
{
continue;
}
i = executer(c, av);
}
return (0);
}

