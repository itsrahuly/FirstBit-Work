#include <stdio.h>
#include <string.h>

void  main() {
    char a[] = "HELLO";
    char b[] = "hello";

    #ifdef _WIN32
        printf("Case-insensitive compare: %d\n", _stricmp(a, b));
    #else
        printf("Case-insensitive compare: %d\n", strcasecmp(a, b));
    #endif
    return 0;
}
