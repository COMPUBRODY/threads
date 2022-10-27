#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>



#define BUF_SIZE 150

int main()
{
    int pid = fork();
    char buff[BUF_SIZE];
    int print_count;

    switch(pid)
    {
        case -1:
            perror("fork failed");
            exit(1);
        case 0:
            print_count = 2;
            sprintf(buff, "child process: pid = %d", pid);
            break;
        default:
            print_count = 10;
            sprintf(buff, "parent process: pid = %d", pid);
            break;

    }

    for(;print_count > 0; print_count--) 
    {
        puts(buff);
        sleep(1);
    }

    exit(0);
}