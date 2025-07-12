#include <stdio.h>


void main() {
    printf("Compare: %d\n", mystrcmp("abc", "abd"));
}
int mystrcmp(const char* s1, const char* s2)
 {
    while (*s1 && *s1 == *s2) { 
	s1++;
	 s2++; 
	 }
    return *s1 - *s2;
}
