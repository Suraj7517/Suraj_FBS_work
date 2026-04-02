/*7. Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/
void main(){
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
	if(age<12){
		printf("You are a child");
	}
	else if(age>=12 && age<=19){
		printf("You are teenager");
	}
	else if(age>=20 &&age<=59){
		printf("You are adult");
	}
	else if(age>=60){
		printf("Your are senior");
	}
	else{
		printf("Invalid age");
	}
}