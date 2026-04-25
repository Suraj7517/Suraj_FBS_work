/*7. Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/
int Age(int);
void main(){
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	int n=Age(age);	
	
	if(n==1){
	printf("You are a child");
	}
	else if(n==2){
		printf("You are teenager");
	}
	else if(n==3){
		printf("You are adult");
	}
	else if(n==4){
		printf("Your are senior");
	}
	else if(n==0){
		printf("Invalid age");
	}
}
int Age(int age){
	
	if(age<12){
		return 1;
	}
	else if(age>=12 && age<=19){
		return 2;
	}
	else if(age>=20 &&age<=59){
		return 3;
	}
	else if(age>=60){
		return 4;
	}
	else{
		return 0;
	}
}