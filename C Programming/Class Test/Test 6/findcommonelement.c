#include <stdio.h>

void main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr[n1];  

    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int brr[n2];

    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &brr[i]);

    printf("Common elements are: ");
    int found = 0;
    for (int i = 0; i < n1; i++) 
	{
        for (int j = 0; j < n2; j++) 
		{
            if (arr[i] == brr[j]) 
			{
                printf("%d ", arr[i]);
                found = 1;
                break;  
            }
        }
    }

    if (!found) {
        printf("None");
    }

    printf("\n");
}
