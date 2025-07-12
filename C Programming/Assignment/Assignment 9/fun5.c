void  main() {
    char str1[20] = "Hello, ";
    char str2[] = "World!";
    strncat(str1, str2, 8);
    printf("Concatenated part: %s\n", str1);

}
