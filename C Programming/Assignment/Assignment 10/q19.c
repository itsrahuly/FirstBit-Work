#include <stdio.h>



void main() {
    printf("Span: %d\n", mystrspn("hello", "he"));
}
int mystrspn(const char* str, const char* accept)
 {
    int count = 0;
    while (*str) {
        int match = 0;
        for (int i = 0; accept[i]; i++)
            if (*str == accept[i]) match = 1;
        if (!match) break;
        count++; str++;
    }
    return count;
}