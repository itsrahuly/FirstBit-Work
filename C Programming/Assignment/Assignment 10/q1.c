#include <stdio.h>


void main() {
    char str[] = "Firstbit";
    printf(" %s Length: %d",str, mystrlen(str));
}
int mystrlen(const char* str) {
    int len = 0;
    while (str[len]) len++;
    return len;
}

