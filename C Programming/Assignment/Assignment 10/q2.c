#include <stdio.h>

char* mystrcpy(char* , const char* );
void main() 
{
    char src[] = "Hello";
    char dest[20];
    mystrcpy(dest, src);
    printf(" Src :%s",src);
    printf("\ndest Copied: %s\n", dest);
}
char* mystrcpy(char* dest, const char* src) {
    char* temp = dest;
    while (*src) *dest++ = *src++;
    *dest = '\0';
    return temp;
}


