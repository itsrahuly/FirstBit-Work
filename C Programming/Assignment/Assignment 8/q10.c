
void sort(int arr[],int n);//decalation

void  main() 
{
    int arr[10] = {100, 200, 352, 245, 245, 57, 2, 58, 145, 354};
    int n = 10;
    sort(arr, n);//call
}
void sort(int arr[],int n)//defination
{

    int temp;


    for (int i = 0; i < n - 1; i++) 
        for (int j = 0; j < n - 1 - i; j++) 
            if (arr[j] > arr[j + 1])
			 {
                temp = arr[j];
                arr[j] = arr[j + 1];//swap for sort at array
                arr[j + 1] = temp;
 }

    
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) 
        printf("%d ", arr[i]);

}
