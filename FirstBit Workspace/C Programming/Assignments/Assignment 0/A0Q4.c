//4. Write a C program to swap two numbers using a temporary third variable.
void main(){
	int a=10,b=25,temp;
	printf("The value of a and b before swapping a = %d b = %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nThe value of a and b After swapping a = %d b = %d",a,b);
}