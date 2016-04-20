#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/**
 * Tests if an env var with the given name has been set and prints its value.
 */
int main(int argc, char* argv[], char* envp[])
{
    if(argc < 2 || argc > 3) {
        printf("Usage: %s [-v] NAME\n", argv[0]);
        return 2;
    }
    // parse the command args
    char* name = NULL;
    bool verbose = false;
    for (int i=1; i<argc; i++) {
        if(strcmp(argv[i], "-v") == 0)
            verbose = true;
        else if(name == NULL)
            name = argv[i];
        else {
            printf("Invalid argument: %s!\n", argv[i]);
            return 2;
        }
    }
    // use getenv to check if var is present and print its value when -v is set
    char* val = getenv(argv[1]);
    if(val != NULL) {
        if(verbose)
            printf("%s\n", val);
        return 0;
    }
    else {
        // nope, not available
        return 1;
    }
}
