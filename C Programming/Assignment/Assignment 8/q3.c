#include <stdio.h>
int sumfun(int arr[],int size);
void main() 
{
    int arr[10] = {100, 200, 352, 245, 245, 57, 2, 58, 145, 354};
    int sum=sumfun(arr,10);
}
int sumfun(int arr[], int size)
{
 	int sum = 0;
    for (int i = 0; i < size; i++) 
        sum =sum+ arr[i];


    printf("Sum of all elements in the array = %d\n", sum);

}
