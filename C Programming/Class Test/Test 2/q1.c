//wap to calculate electric bill for 1-50 unit-30$unit, for 51-150 units-40$, for 151 and above units 50$ unit
void main()
{
	int unit;
	printf("Enter a unit: ");
	scanf("%d",&unit);
	if(unit<=50)
	{
		int c=30;
		int total=unit*c;
		printf("Your unit is %d \nunit per charges %d \nTotal electricity bill is %d\n", unit,c,total);
	}
	else if(unit<=150)
	{
		int c=40;
		int total=unit*c;
		printf("Your unit is %d \nunit per charges %d \nTotal electricity bill is %d\n", unit,c,total);
	}
	else if(unit>=151)
	{
		int c=50;
		int total=unit*c;
		printf("Your unit is %d \nunit per charges %d \nTotal electricity bill is %d\n", unit,c,total);
	}
	else
		printf("Enter Vaild unit");
}