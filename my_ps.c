#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ps with execlp\n");
    execlp("ps", "ps", NULL);
    printf("Done.\n");
    exit(0);
}