int  evenodd();//decalaration
int leap();
void main()//main start(call function)
{
	int evenodd();//call
	 int leap();
	if(evenodd())
		printf("even \n");
	else
		printf("odd \n");	
	if(leap())
		printf("leap \n");
	else
		printf("no leap \n ");
}
//main ends
int  evenodd()//defination
{
		int no=1;
		return no%2==0;
}
 int leap()
{
	int year=2004;
	return(year%4==0&& year%100 !=0) || (year% 400 ==0);
	
}	
