#include <stdio.h>



void main() 
{
    printf("Memcmp: %d\n", mymemcmp("abc", "abd", 2));
}
int mymemcmp(const char* a, const char* b, int n)
 {
    for (int i = 0; i < n; i++)
        if (a[i] != b[i]) 
		return a[i] - b[i];
   
}