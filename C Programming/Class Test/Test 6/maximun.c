#include <stdio.h>

void main() 
{
    int arr[5];
    int n = 5;

    printf("Enter 5 elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    int max1, max2;

    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
    } else {
        max1 = arr[1];
        max2 = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("Two maximum numbers are: %d and %d\n", max1, max2);
}
