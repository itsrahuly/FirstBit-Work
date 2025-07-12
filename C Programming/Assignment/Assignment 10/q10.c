#include <stdio.h>

char* mystrstr(const char* , const char* );

void main() {
    char* res = mystrstr("Firstbit Solutions", "is");
    printf("Found: %s\n", res);
}
char* mystrstr(const char* b, const char* a) {
    int i, j;
    for (i = 0; b[i]; i++) 
	{
        for (j = 0; a[j] && b[i + j] == a[j]; j++);
        if (!a[j])
		 return (char*)&b[i];
    }
    return NULL;
}