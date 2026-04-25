//5.Write a program to check whether a person is eligible to vote (age = 18).
int Vote();
void main(){
	int x=Vote();
	if(x){
		printf("The person is eligible for voting");
	}
	else{
		printf("The person is not eligible for voting");
	}
}
int Vote(){
	int age=34;
	if(age>=18){
		return 1;
	}
	else{
		return 0;
	}
	}
	