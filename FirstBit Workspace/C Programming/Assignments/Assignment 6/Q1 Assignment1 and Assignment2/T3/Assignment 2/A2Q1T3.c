/*1.Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
void Op(int, int,char);
void main(){
	int a,b;
	char ope;
	printf("Enter two numbers :");
	scanf("%d %d",&a,&b);
	printf("Enter operator to perform operation(+,-,/,*,%):");
	scanf(" %c",&ope);
	Op(a,b,ope);	
}
void Op(int a,int b,char op){

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