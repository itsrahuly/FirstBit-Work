void merge(int arr[],int brr[],int size);
void  main()
 {
   	int arr[5]= {1,2, 3, 4,5} ;
   	int brr[5]={10,20,30, 40, 50};
    merge(arr,brr,5);
   
}
void merge(int arr[],int brr[],int size)
{
	int crr[10]; 
   for(int i=0;i<size;i++)
    	crr[i]=arr[i];
	for(int i=0;i<size;i++)
		crr[i+size]=brr[i];
		  printf("Merged array elements:\n");
    
	for(int i=0;i<10;i++)
		printf(" %d",crr[i]);
}

    	