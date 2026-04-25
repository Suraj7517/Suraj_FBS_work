//5.Write a program to check whether a person is eligible to vote (age = 18).
void check(int);
void main(){
	int age=34;
	check(age);	
}
void check(int age){
	
	if(age>=18){
		printf("The person eligible for voting");
	}
	else{
		printf("The person is not eliible for voting");
	}
}