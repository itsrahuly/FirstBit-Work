void basicsal();

void main()
{
	 basicsal();
}
void basicsal()
{
	
	float basic=4000;
	float da,ta,hra,total;
	 
	 if(basic<=5000)
	 {
	 	da=basic*0.10;
	 	ta=basic*0.20;
	 	hra=basic*0.25;
	 	
	 	total=da+ta+hra+basic;
	 	printf("Basic Salary %f\n",basic);
	 	printf("da is %f\n",da);
	 	printf("ta is %f\n",ta);
	 	printf("hra is %f\n",hra);
	 	printf("total is %f \n",total);
	 }
	 else
	 {
	 	da=basic*0.15;
	 	ta=basic*0.25;
	 	hra=basic*0.30;
	 	
	 	total=da+ta+hra+basic;
	 	printf("Basic Salary %f\n",basic);
	 	printf("da is %f\n",da);
	 	printf("ta is %f\n",ta);
	 	printf("hra is %f\n",hra);
	 	printf("total is %f \n",total);
	 }
}