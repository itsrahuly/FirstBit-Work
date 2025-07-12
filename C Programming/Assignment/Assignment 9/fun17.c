#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "abc123";
    char *found = strpbrk(str, "123");
    printf("First matching char: %s\n", found);
    return 0;
}
