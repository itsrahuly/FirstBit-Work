#include <stdio.h>



void main() {
    char s[] = "HELLO";
    mystrlwr(s);
    printf("Lowercase: %s\n", s);
}
void mystrlwr(char* s)
 {
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
}