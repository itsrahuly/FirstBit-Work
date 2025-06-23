#include <stdio.h>



void  main() 
{
    int arr[5], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    
    printf("Prime numbers in the array are:\n");
    for (int i = 0; i < n; i++) 
        if (isPrime(arr[i])) 
            printf("%d ", arr[i]);

}
int isPrime(int num) 
{
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) 
        if (num % i == 0)
            return 0;
    return 1;
}
