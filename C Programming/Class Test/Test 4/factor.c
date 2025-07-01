void main()
{
	int start;
	int end;
	 printf("Enter a start number to find factors: ");
    scanf("%d", &start);

    
    printf("Enter an end number to find factors: ");
    scanf("%d", &end);
	printf("\n");
	
	for(int i=start;i<=end;i++)
	{
		printf("%d =",i);
		
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			printf("%d ", j);
			
		}
		printf("\n");
	}
	  printf("\n");

}