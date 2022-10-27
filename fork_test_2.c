#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
            // when fork() returns 0, we are in the child process
            print_count = 10;
            sprintf(buff, "child process: pid = %d", pid);
            break;
        default:
            //when fork() returns a positive number, we are in the parent process
            // the fork return value is the PID of the newly created child process
            print_count = 5;
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