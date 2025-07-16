#include<stdio.h>

void  palindrome(int size, int* ptr);  

void main()
{
	int arr[2];
	int size = 2;

	printf("Enter elements in Array:\n");

	for(int i = 0; i < size; i++)
	{
		scanf("%d", &arr[i]);
	}

	 palindrome(size, arr);

}

void palindrome(int size, int* ptr)
{
	int ispalindrome = 1;
	for(int i = 0; i < size / 2; i++)
	{
		if(ptr[i] != ptr[size - i - 1])
		{
			ispalindrome = 0;
			break;
		}
	}
	if(ispalindrome)
		printf("Palindrome");
	else
		printf("Not Palindrome");

}
