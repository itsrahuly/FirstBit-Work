#include <stdio.h>

char* mystrdup(const char* );

void main() {
    char* p = mystrdup("Firstbit Solutions");
    printf("Duplicate: %s\n", p);
}
char* mystrdup(const char* s) {
    static char temp[100];
    int i = 0;
    while (s[i]) {
        temp[i] = s[i];
        i++;
    }
    temp[i] = '\0';
    return temp;
}