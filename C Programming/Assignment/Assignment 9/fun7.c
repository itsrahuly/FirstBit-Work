#include<stdio.h>
void  main() 
{
    char a[] = "abcdef";
    char b[] = "abcxyz";
    printf("Compare first 3: %d\n", strncmp(a, b, 3));
}
