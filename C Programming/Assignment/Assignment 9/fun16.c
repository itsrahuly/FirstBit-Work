#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void  main() {
    char str[] = "duplicate me";
    char *copy = strdup(str);
    printf("Duplicated: %s\n", copy);
    free(copy);
    return 0;
}
