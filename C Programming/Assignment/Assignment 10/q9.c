#include <stdio.h>
char* mystrrchr(const char* , char );


void main() {
    char* res = mystrrchr("Firstbit", 'n');
    printf("Last n: %s\n", res);
}
char* mystrrchr(const char* str, char ch) {
    const char* last = NULL;
    while (*str) {
        if (*str == ch) last = str;
        str++;
    }
    return (char*)last;
}
