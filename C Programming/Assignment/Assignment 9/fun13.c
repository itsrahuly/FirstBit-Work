#include <stdio.h>
#include <string.h>

void main() {
    char src[] = "12345";
    char dest[10];
    memcpy(dest, src, 5);
    dest[5] = '\0';
    printf("Copied: %s\n", dest);
    return 0;
}
