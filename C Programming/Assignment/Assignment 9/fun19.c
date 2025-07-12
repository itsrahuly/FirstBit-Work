#include <stdio.h>
#include <string.h>

void main() {
    char str[] = "abc123";
    size_t len = strcspn(str, "123");
    printf("First non-match at index: %lu\n", len);
    return 0;
}
