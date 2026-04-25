//1. Write a program to check whether a number is even or odd.
int check(int);
void main(){
	int no=13;
	int n=check(no);
	if(n==1){
		printf("%d is even number",no);
	}
	else if(n==0){
		printf("%d is odd number",no);
	}
}
int check(int no){
	
	if(no%2==0)
	return 1;
	else
	return 0;

}