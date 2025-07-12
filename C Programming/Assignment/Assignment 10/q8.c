#include <stdio.h>

char* mystrchr(const char* , char );

void main() {
    char* res = mystrchr("Firstbit", 'n');
    printf("First n: %s\n", res);
}
char* mystrchr(const char* str, char ch)
 {
    while (*str)
	 {
        if (*str == ch) 
		return (char*)str;
        str++;
    }
    
}
