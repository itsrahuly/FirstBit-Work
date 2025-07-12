void fact();

void  main() 
{
	fact();
}
void fact()
{
    int n = 5;
    int fact = 1;
    int i = 1;

    
    while( i <= n) 
	{
        fact =fact* i;
         i++;
	}
    printf("%d\n", fact);

}
