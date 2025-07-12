#include <stdio.h>



void main() {
    printf("CSpan: %d\n", mystrcspn("hello", "xyzl"));
}
int mystrcspn(const char* str, const char* reject) 
{
    int count = 0;
    while (*str) {
        int stop = 0;
        for (int i = 0; reject[i]; i++)
            if (*str == reject[i]) stop = 1;
        if (stop) break;
        count++; str++;
    }
    return count;
}