#include <stdio.h>
#include <string.h>

void  main() {
    char str[] = "abcdef";
    memmove(str + 2, str, 4);
    printf("After memmove: %s\n", str);
    return 0;
}
