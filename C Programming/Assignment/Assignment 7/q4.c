void main()
{
	int arr[5]={4,1,2,3,10};
	 printf("Even numbers in the array:\n");
    for (int i = 0; i < 5; i++) 
        if (arr[i] % 2 == 0) 
            printf("%d ", arr[i]);
        


    printf("\nOdd numbers in the array:\n");
    for (int i = 0; i < 5; i++) 
        if (arr[i] % 2 != 0) 
            printf("%d ", arr[i]);
        
}