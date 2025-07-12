#include <stdio.h>



void main() 
{
    char s[10];
    mymemset(s, '*', 5);
    s[5] = '\0';
    printf("Memset: %s\n", s);
}
void mymemset(char* s, char ch, int n)
 {
    for (int i = 0; i < n; i++) s[i] = ch;
}