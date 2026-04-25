/*1.Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
void op();
void main(){
	op();	
}
void op(){
	int a,b;
	char op;
	printf("Enter two numbers :");
	scanf("%d %d",&a,&b);
	printf("Enter operator to perform operation(+,-,/,*,%):");
	scanf(" %c",&op);
	
	if(op=='+'){
		printf("The addition of A and b is=%d",a+b);
	}
	else if(op=='-'){
		printf("The subtraction of A and b is=%d",a-b);
	}
	else if(op=='/'){
		printf("The devision of A and b is=%d",a/b);
	}
	else if(op=='*'){
		printf("The multiplication of A and b is=%d",a*b);		
	}
	else if(op=='%'){
		printf("The modulus of A and b is=%d",a%b);
	}
	else{
		printf("Invalid operation!");
	}
	
}