#include <stdio.h>



void main() {
    char src[] = "copy";
    char dest[10];
    mymemcpy(dest, src, 4);
    dest[4] = '\0';
    printf("Memcpy: %s\n", dest);
}
void mymemcpy(char* dest, const char* src, int n)
 {
    for (int i = 0; i < n; i++) dest[i] = src[i];
}