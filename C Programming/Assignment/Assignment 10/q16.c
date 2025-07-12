#include <stdio.h>



void main() {
    char s[] = "abcdef";
    mymemmove(s + 2, s, 4);
    printf("Memmove: %s\n", s);
}
void mymemmove(char* dest, const char* src, int n) 
{
    if (dest < src)
        for (int i = 0; i < n; i++) dest[i] = src[i];
    else
        for (int i = n - 1; i >= 0; i--) dest[i] = src[i];
}