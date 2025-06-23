void  main()
 {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    int temp;
 
    for (int i = 0; i < n / 2; i++) 
	{
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    
    printf("Reversed array:\n");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);
}
