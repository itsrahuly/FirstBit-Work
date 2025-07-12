#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "abc123";
    size_t len = strspn(str, "abc");
    printf("Initial match length: %lu\n", len);
    return 0;
}
