int evenodd(int size);
void main()
{
	int size;
	printf("Enter a array size");
	scanf("%d",&size);
	evenodd(size);
}
int evenodd(size)
{

	int arr[size];
	 printf("Even numbers in the array:\n");
	 for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
    for (int i = 0; i < size; i++) 
        if (arr[i] % 2 == 0) 
            printf("%d ", arr[i]);
        


    printf("\nOdd numbers in the array:\n");
     for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
    for (int i = 0; i < size; i++) 
        if (arr[i] % 2 != 0) 
            printf("%d ", arr[i]);
        
}