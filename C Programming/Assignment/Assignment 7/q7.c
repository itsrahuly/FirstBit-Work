void  main()
 {
   	int arr[5]= {1,2, 3, 4,5} ;
   	int brr[5]={10,20,30, 40, 50};
	int crr[5]; 
    for(int i=0;i<5;i++)
    {
    	crr[i]=brr[i]+arr[i];
    	  printf("Sum of arr[%d] + brr[%d] = %d\n", i, i, crr[i]);
    }
}
    	