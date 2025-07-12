#include <stdio.h>

char* mystrncat(char* dest, const char* , int );



void main() {
    char a[50] = "Hello ";
    mystrncat(a, "World!", 3);
    printf("Concat N: %s\n", a);
}
char* mystrncat(char* dest, const char* src, int n) {
    char* temp = dest;
    while (*dest) dest++;
    while (*src && n--) *dest++ = *src++;
    *dest = '\0';
    return temp;
}
