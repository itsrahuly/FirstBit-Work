void uppercase();
void   main()
{
	uppercase();
}
void uppercase()
{

    char ch='A';

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is an uppercase letter.\n", ch);
    }
    else
    {
            printf("'%c' is a lowercase letter.\n", ch);
       
    }
}
