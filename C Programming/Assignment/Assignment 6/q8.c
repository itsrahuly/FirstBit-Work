void  arithmatic()

void  main()
 {
 	arithmatic();
 }
void  arithmatic()
{
  int num1, num2, res;
    char op;

    printf("Perform Arithmetic operation for user (+, -, *, /, %%)\n");

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter your choice of arithmetic operation (+, -, *, /, %%): ");
    scanf(" %c", &op);  
    printf("You enter choice operation %c\n",op);

    if(op == '+') 
	{
        res = num1 + num2;
        printf("Addition of two numbers: %d\n", res);
    }
    else if(op == '-')
	 {
        res = num1 - num2;
        printf("Subtraction of two numbers: %d\n", res);
    }
    else if(op == '*')
	 {
        res = num1 * num2;
        printf("Multiplication of two numbers: %d\n", res);
    }
    else if(op == '/')
	 {
        if(num2 != 0) {
            res = num1 / num2;
            printf("Division of two numbers: %d\n", res);
        } 
		else 
            printf("Division by zero is not allowed.\n");
    }
    else if(op == '%')
	 {
        if(num2 != 0) {
            res = num1 % num2;
            printf("Modulus of two numbers: %d\n", res);
        }
		 else 
            printf("Modulus by zero is not allowed.\n");        
    }
    else
        printf(" Invalid operation.\n");
}
