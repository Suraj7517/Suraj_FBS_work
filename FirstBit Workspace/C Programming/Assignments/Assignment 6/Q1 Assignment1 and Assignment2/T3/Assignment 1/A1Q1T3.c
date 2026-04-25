//1. Write a program to check whether a number is even or odd.
void check(int);
void main(){
	int no=20;
	check(no);
}
void check(int no){
	
	if(no%2==0)
	printf("%d is even number",no);
	else
	printf("%d is odd number",no);
}