#include <stdio.h>
#include <unistd.h>

/**
 * Executes the program with the given name in a seperate process.
 */
int main(int argc, char* argv[], char* envp[])
{
    if(argc < 2) {
        printf("Usage: %s NAME [ARGS]\n", argv[0]);
        return 2;
    }
    const char* path = argv[1];
    // we need to shift the args left to remove our name
    for(int k=0; k<argc-1; k++)
    {
        argv[k]=argv[k+1];
    }
    argv[argc-1] = NULL;

    // fork a shiny new child to run the task in
    pid_t pid = fork();

    if(pid == 0) {
        // child
        return execv(path, argv);
    }
    else {
        // parent
        printf("Launched task in process %i\n", pid);
    }
}
