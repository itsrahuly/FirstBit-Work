void main()
{
	char str[20];
	int count=0;
	
	printf("Enter a string :");
	scanf("%s", str);
	
	for(int i=0;str[i] !='\0';i++)
	{
	
		char ch=str[i];
		
		if( ch == 'a' || ch == 'A' || 
            ch == 'e' || ch == 'E' || 
            ch == 'i' || ch == 'I' || 
            ch == 'o' || ch == 'O' || 
            ch == 'u' || ch == 'U')
		{
			count++;
		}
	}
	printf("Number of vowels : %d\n",count);
	
}