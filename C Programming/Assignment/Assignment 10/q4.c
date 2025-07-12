#include <stdio.h>


char* mystrcat(char* , const char* );
void main() {
    char a[50] = "Hello ";
    char b[] = "World";
    mystrcat(a, b);
    printf("Concat: %s\n", a);
}
char* mystrcat(char* dest, const char* src) {
    char* temp = dest;
    while (*dest) dest++;
    while (*src) *dest++ = *src++;
    *dest = '\0';
    return temp;
}