/*1.Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
desired operations.*/
int op();
void main(){
	int x=op();
	printf("The operational value is : %d",x);
	}
int op(){
	int a,b;
	char op;
	printf("Enter two numbers :");
	scanf("%d %d",&a,&b);
	printf("Enter operator to perform operation(+,-,/,*,%):");
	scanf(" %c",&op);
	
	if(op=='+'){
		return a+b;
	}
	else if(op=='-'){
		return a-b;
	}
	else if(op=='/'){
		 if(b==0){
        printf("Cannot divide by zero!");
    }
		return a/b;
	}
	else if(op=='*'){
		return a*b;	
	}
	else if(op=='%'){
		return a%b;
	}
	else{
		printf("Invalid operation!");
	}
	
}