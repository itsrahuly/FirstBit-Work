int  evenodd();//decalaration
void main()//main start
{
//	int  res=evenodd();//call
	if(evenodd())
		printf("even \n");
	else
		printf("odd \n");
		
}//main ends
int  evenodd()//defination
{
		int no;
		printf("Enter a number");
		scanf("%d",&no);
		return no%2==0;
		 	
}