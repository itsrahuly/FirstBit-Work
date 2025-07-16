#include<stdio.h>

void exchange(int, int, int, int *);

void main()
{
    int arr[7];
    int size = 7;
    int x, y;

    printf("Enter xth position: ");
    scanf("%d", &x);

    printf("Enter yth Position: ");
    scanf("%d", &y);

    printf("Enter Number:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    exchange(x, y, size, arr);
}

void exchange(int x, int y, int size, int *ptr)
{
  
    if (x < 0 && x >= size || y < 0 && y >= size)
        printf("Invalid indices\n");

    int temp = ptr[x];
    ptr[x] = ptr[y];
    ptr[y] = temp;

    printf("Array after exchange:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}
