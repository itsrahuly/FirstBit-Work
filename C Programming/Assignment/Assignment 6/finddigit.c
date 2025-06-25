int finddigit(int , int );
void main()
{
	int no=123456;
	int dig=88;
	int res=finddigit(no,dig);

	if(res==1)
		printf("digit found");
	else
		printf("digit not found");
}
 int finddigit(int a, int b)
{
	while(a>0)
	{
		int rem=a%10;
		if(rem==b)
			return 1;
		a=a/10;
	}
		return 0;
}