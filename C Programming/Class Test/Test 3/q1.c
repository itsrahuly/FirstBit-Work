void main()
{
	int start,end;


	printf("enter a start point ");
	scanf("%d",&start);
	printf("enter a end point ");
	scanf("%d",&end);
		for(int i=start;i<=end;i++)
			if(i%2!=0)
			printf("%d \n",i);
		printf("\n");
		for(int i=start;i<=end;i++)
			if(i%2==0)
			printf("%d \n",i);


}