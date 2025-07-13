void main()
{
	char str[20];
	int count=1;
	int i=0;
	printf("Enter a string:");
	gets(str);
	
	
	while(str[i]!='\0')
	{	count++;
		i++;
	}
	

	printf("Number of words present in string is %d",count);
}