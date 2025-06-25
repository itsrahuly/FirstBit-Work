evenodd(int);
void main()
{
	int no;
	printf("Enter a number to find even & odd");
	scanf("%d",&no);
	 int res=evenodd(no);
	 if(res==1)
	 	printf("even");
	else
		printf("odd");
}
evenodd(a)
{
//	if(a%2==0)
//		return 1;
//	else
//		return 0;
	return (a%2==0);
}