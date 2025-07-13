
void main()
{
    char str[20];
    int i;

    printf("Enter a string :");
    gets(str);  

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '#';
        }
    }

    printf("\nModified string using special symbol :  %s\n", str);
}
