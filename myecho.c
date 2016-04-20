#include <stdio.h>

/**
 * Simply echoes the input args, similar to the echo shell command in unix.
 */
int main(int argc, char* argv[], char* envp[])
{
    for(int i=1; i<argc; i++) {
        printf("%s ", argv[i]);
    }
    printf("\n");
    return 0;
}
