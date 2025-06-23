void  main()
 {
    int arr[10] = {100, 200, 352, 245, 245, 57, 2, 58, 145, 354};
    int search, found = 0;

    printf("Enter the number to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 10; i++) 
        if (arr[i] == search) 
		{
            printf("Number %d found at position %d (index %d)\n", search, i + 1, i);
            found = 1;
        }

    if (!found) 
        printf("Number %d not found in the array.\n", search);

}
