#include <stdio.h>
#include <string.h>

void  main() {
    char str[] = "C is fun to learn";
    char *token = strtok(str, " ");
    while (token) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    
}
