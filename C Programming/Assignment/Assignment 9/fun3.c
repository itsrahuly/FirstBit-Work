void  main() 
{
    char src[] = "Hello";
    char dest[6];
    strncpy(dest, src,2);
    printf("Copied part: %s\n", dest);
    printf("%s",dest[3]);
}
