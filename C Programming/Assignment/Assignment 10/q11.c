#include <stdio.h>
void mystrrev(char* ); 


void main() {
    char s[] = "reverse";
    mystrrev(s);
    printf("Reversed: %s\n", s);
}
void mystrrev(char* str) 
{
    int i = 0, j;
    for (j = 0; str[j]; j++);
    j--;
    while (i < j)
	 {
        char t = str[i];
        str[i++] = str[j];
        str[j--] = t;
    }
}
