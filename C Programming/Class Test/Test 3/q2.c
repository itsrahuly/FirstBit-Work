//wap to add alternate number from given range 
void main()
{
	int start,end,sum=0;
	printf("enter a start point ");
	scanf("%d",&start);
	printf("enter a end point ");
	scanf("%d",&end);
	 
	 	for (int i = start; i <= end; i=i+2) 
        sum = sum+i;
    

    printf("Sum of alternate numbers: %d\n", sum);
   
}
