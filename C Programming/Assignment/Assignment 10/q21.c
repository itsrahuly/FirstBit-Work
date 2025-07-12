#include <stdio.h>
char* mystrpbrk(const char* , const char* );

void main() {
    char* res = mystrpbrk("abcde", "xzcd");
    printf("First match: %s\n", res);
}
char* mystrpbrk(const char* str, const char* accept) {
    while (*str) {
        for (int i = 0; accept[i]; i++)
            if (*str == accept[i]) return (char*)str;
        str++;
    }
    return NULL;
}
