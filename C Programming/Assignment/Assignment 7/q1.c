void main()
{
	int arr[10]={100,200,352,245,245,57,2,58,145,354};
	int max,min;


    for (int i = 1; i < 10; i++) 
	{
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}