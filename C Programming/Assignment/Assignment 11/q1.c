void main()
{
	char str[20];
	char ch;
	
	int i=0,found=0;
	
	printf("Enter string :");
	scanf("%s",str);
	
	printf("enter a single character to find a inside the string:");
	scanf(" %c",&ch);
	
	while(str[i]!="\0"){
		if(str[i]==ch)
		{
			found=1;
			 printf("\nCharacter '%c' found at position %d\n", ch, i);
		}
		i++;
}
	if(!found)
	printf("Character '%c' not found in the string.\n", ch);
}