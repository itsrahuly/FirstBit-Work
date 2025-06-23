#include <stdio.h>

void  main()
 {
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printPrimesInArray(arr, n);  

    
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


void printPrimesInArray(int arr[], int size)
 {
    printf("Prime numbers in the array are:\n");
    for (int i = 0; i < size; i++)
        if (isPrime(arr[i]))
            printf("%d ", arr[i]);
    printf("\n");
}
