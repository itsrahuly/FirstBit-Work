#include <stdio.h>
#include <string.h>

void main() {
    char str[10];
    memset(str, '*', 5);
    str[5] = '\0';
    printf("After memset: %s\n", str);
    
}
