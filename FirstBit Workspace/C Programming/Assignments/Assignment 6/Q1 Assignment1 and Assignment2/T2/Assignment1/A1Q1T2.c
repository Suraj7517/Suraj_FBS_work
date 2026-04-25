//1. Write a program to check whether a number is even or odd.
int check();
void main(){
	int x=check();
	if(x){
		printf("Even number");
	}
	else{
		printf("Odd number");
	}
}
int check(){
	int no=20;
	if(no%2==0)
	return 1;
	else
	return 0;
}
