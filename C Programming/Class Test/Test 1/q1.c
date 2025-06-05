void main()
{
	int hh,min,sec,totalsec;
	
	printf("Enter a hours:");
	scanf("%d",&hh);
	printf("Enter a min:");
	scanf("%d",&min);
	printf("Enter a sec:");
	scanf("%d",&sec);
	
	totalsec=hh*3600+min*60+sec;
	printf("Total seconds %d",totalsec);
}