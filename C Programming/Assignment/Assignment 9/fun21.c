#include <stdio.h>

void main() {
    char buffer[50];
    int n = snprintf(buffer, sizeof(buffer), "Number: %d", 42);
    printf("Formatted (%d chars): %s\n", n, buffer);
    return 0;
}
