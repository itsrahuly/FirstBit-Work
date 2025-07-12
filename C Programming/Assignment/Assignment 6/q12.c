void findage();

void main()
{
	findage();
}
void findage()
{
	int age;
	printf("Enter a age:");
	scanf("%d",&age);
	if(age>60)
		printf("Senior");
	else if(age<=60 && age>=20)
		printf("Adult");
	else if(age<=19 && age>=10)
		printf("Teenger");
	else if(age<=10&& age>=0)
		printf("child");
	else
		printf("Enter vaild number");
}
