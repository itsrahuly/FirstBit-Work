#include <stdio.h>

int mystrlen(const char* str) {
    int i = 0;
    while (str[i]) i++;
    return i;
}

char* mystrcat(char* dest, const char* src) {
    int i = mystrlen(dest);
    int j = 0;
    while (src[j]) {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return dest;
}

void main() {
    char str1[50] = "Hello ";
    char str2[] = "World!";
    mystrcat(str1, str2);
    printf("Concatenated: %s\n", str1);
}
