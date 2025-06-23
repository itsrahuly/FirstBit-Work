void maxmin(int arr[], int size);//intitalization
void  main()
 {
    int arr[10] = {100, 200, 352, 245, 245, 57, 2, 58, 145, 354};
    maxmin(arr, 10);//call
   
}

void maxmin(int arr[], int size) //decalartion
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}
