int alternate(int arr[],int size);
void main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int sum=alternate(arr,10);
}
int alternate(int arr[],int size)
{
   printf("Alternate elements in the array:\n");

    for (int i = 0; i < size; i=i+2) 
        printf("%d ", arr[i]);


}