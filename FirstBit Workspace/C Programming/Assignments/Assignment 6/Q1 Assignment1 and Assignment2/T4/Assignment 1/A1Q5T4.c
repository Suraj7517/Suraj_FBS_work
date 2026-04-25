//5.Write a program to check whether a person is eligible to vote (age = 18).
int check(int);
void main(){
	int age=34;
	int n=check(age);	
	if(n){
		printf("The person is eligible for voting");
	}
	else{
		printf("The person is not eligible for voting");
	}
}
int check(int age){
	
	if(age>=18){
		return 1;
	}
	else{
		return 0;
	}
}