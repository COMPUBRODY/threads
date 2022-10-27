#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main(char *path, char *argv[])
{
    pid_t pid = fork();
    if(pid == 0)
    {
        printf("Child\n");
        execv(path, argv);
    }
    else
    {
        printf("Parent %d\n", pid);
    }
    printf("Parent printf this line \n");
}