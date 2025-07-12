#include <stdio.h>

void mystrupr(char* );

void main() {
    char s[] = "hello";
    mystrupr(s);
    printf("Uppercase: %s\n", s);
}
void mystrupr(char* s)
 {
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
}