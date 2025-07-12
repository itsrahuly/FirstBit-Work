#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "Find the letter f";
    char *ptr = strchr(str, 'f');
    printf("First 'e' at: %s\n", ptr);
  
}
