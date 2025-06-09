#include<stdio.h>
void main()
{
	int marks;
	printf("Enter  marks");
	scanf("%d",& marks);
	if(marks>=80)
		printf("A+ with distinction");
	else
	{
		if(marks>=75)
			printf("A+");
		else
		{
			if(marks>=65)
				printf("First Class");
			else
			{
				if(marks>=55)
					printf("Second Class");
				else
			 	{
					if(marks>=35)
						printf("Pass class ");
					else
						printf("Fail");	
			 	}	
			
			}		
		}	
	}
}