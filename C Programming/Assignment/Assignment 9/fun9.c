#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "Look from right for o";
    char *ptr = strrchr(str, 'o');
    printf("Last 'o' at: %s\n", ptr);
    
}
