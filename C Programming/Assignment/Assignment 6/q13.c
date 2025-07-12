void triangle();

void main()
{
	triangle();
}
void triangle()
{
	int s1,s2,s3;
	printf("Enter a side for Triangle\n");
	printf("Enter first side:");
	scanf("%d",&s1);
	printf("Enter second side:");
	scanf("%d",&s2);
	printf("Enter thrid side:");
	scanf("%d",&s3);
	
	if(s1==s2&& s2==s3)
		printf("Equliteral Triangle");
	else if(s1==s2|| s2==s3||s3==s1)
		printf("Isosceles Triangle");
	else 
		printf("Scalene Triangle");	
}