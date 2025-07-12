#include <stdio.h>

char* mystrncpy(char* , const char* , int ) ;
void main() {
    char src[] = "Hello world";
    char dest[10];
    mystrncpy(dest, src, 4);
    dest[4] = '\0';
    printf("Copy N: %s\n", dest);
}
char* mystrncpy(char* dest, const char* src, int n) {
    int i;
    for (i = 0; i < n && src[i]; i++) dest[i] = src[i];
    for (; i < n; i++) dest[i] = '\0';
    return dest;
}

