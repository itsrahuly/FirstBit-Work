#include <stdio.h>

void main() 
{
    int arr[10] = {100, 200, 352, 245, 245, 57, 2, 58, 145, 354};
    int sum = 0;

    for (int i = 0; i < 10; i++) 
        sum =sum+ arr[i];


    printf("Sum of all elements in the array = %d\n", sum);

}
