void armstrong();

void main()
 {
 	armstrong();
}
void armstrong()
{
	    int n = 1634;
    int original = n;
    int sum = 0, digit;

    while (n != 0) 
	{
        digit = n % 10; 
   
        sum =sum+ digit * digit * digit*digit; 
        	  
			n=n/10;
		printf("%d\n",sum); 
                     
    }
 
    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    
}
