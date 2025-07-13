void main()
{
	char str[20];

	printf("Enter a string:");
	scanf("%s",str);
	
	for(int i=0;str[i] !='\0';i++)
	{
		if(str[i]=='a')
		{
			str[i]='$';
		}
	}
	printf("Replace String as  %s",str);
}