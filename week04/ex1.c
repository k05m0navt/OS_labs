#include <stdio.h>
#include <unistd.h>

int     main()
{
    pid_t   n;

    n = fork();
    if (n == 0)
        printf("Hello from child [PID - %d]\n", getpid());
    else if (n > 0)
        printf("Hello from parent [PID - %d]\n", getpid());
    else
        printf("Unable to create child process.\n");
    return (0);
}

/*  After each run of the program(10 times for our task) fork() creates an additional processes, 
 *  so we have one Parrent and one Child process
 */