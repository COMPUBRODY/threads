#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void my_signal_interrupt(int sig)
{
    printf("I got signal %d\n", sig);
    (void) signal(SIGINT, SIG_DFL);
}

int main()
{
    (void) signal(SIGINT, my_signal_interrupt);

    while(1)
    {
        printf("Waiting for interruption...\n");
        sleep(1);
    }
}