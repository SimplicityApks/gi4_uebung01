#include <stdio.h>

/**
 * Simply echoes the environment vars in the current shell, similar to the env command.
 */
int main(int argc, char* argv[], char* envp[])
{
    int envCount;
    for(envCount=0; envp[envCount]!=NULL; envCount++) {
        printf("%s\n", envp[envCount]);
    }
    printf("Found %i env variables!\n", envCount);
    return 0;
}
