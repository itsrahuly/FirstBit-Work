#include <stdio.h>
#include <string.h>

void main() {
    char text[] = "C programming language";
    char *found = strstr(text, "program");
    printf("Found substring: %s\n", found);
    
}
