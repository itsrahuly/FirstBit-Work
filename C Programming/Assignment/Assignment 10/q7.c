#include <stdio.h>
int mystrncmp(const char* , const char* , int );
void main()
 {
    printf("Compare N: %d\n", mystrncmp("abc", "abd", 2));
}

int mystrncmp(const char* s1, const char* s2, int n)
 {
    while (n-- && *s1 && (*s1 == *s2)) 
	{ s1++; 
	s2++; 
	}
    return (n < 0) ? 0 : *s1 - *s2;
}


