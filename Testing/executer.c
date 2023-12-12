#include "main.h"

/**
* executer - is the function that execut
* @c: is a pointer variable
* @argv: is the argument vector variable
* Return: return what should be returned
*/

int executer(char **c, char **argv)
{
pid_t kid;
int i = 0;

kid = fork();
if (kid == 0)
{
if(execve(c[0], c, environ) == -1)
{
perror(argv[0]);
imFree(c);
exit(127);
}
}
else
{
waitpid(kid, &i, 0);
imFree(c);
}
return (WEXITSTATUS(i));
}
