void main()
{
	char str[20];
	int index;
	
	printf("Enter a string:-");
	scanf(" %s",str);
	
	printf("Enter index  to remove:");
	scanf("%d",&index);
	
	printf("\nbefore  remove : %s\n",str);

	for(int i=index; str[i] !='\0';i++)
	{
		str[i]=str[i+1];
	}
	printf("String after remove : %s\n",str);
	
}