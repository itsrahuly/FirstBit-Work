void sum();


void main()
{
	sum();
}
void sum()
{
	int s=1,e=5,sum=0;
	int i=s;
	while(i<=e)
	{
		sum=sum+i;
		i++;
	}
	printf("sum %d",sum);
	
}