#include<string.h>
void main()
{
	char str[100];
	int len;
	char temp;
	
	printf("Enter a string:");
	scanf("%s",str);
	
	len=strlen(str);
	printf("%d",len);
	
	if(len>1)
	{
		temp=str[0];
		str[0]=str[len-1];
		str[len-1]=temp;
	}
	printf("\nNew string after swapping first and last character : %s",str);
}