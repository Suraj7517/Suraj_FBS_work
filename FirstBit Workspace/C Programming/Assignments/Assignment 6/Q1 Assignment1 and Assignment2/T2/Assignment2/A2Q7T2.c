/*7. Accept the age and check if the person is:
Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)*/
int Age();
void main(){
	int res = Age();
	if(res==1){
		printf("You are a child");
	}
	else if(res==2){
		printf("You are teenager");
	}
	else if(res==3){
		printf("You are adult");
	}
	else if(res==4){
		printf("Your are senior");
	}
	else if(res==0){
		printf("Invalid age");
	}
}
int Age(){
	int age;
	printf("Enter Age : ");
	scanf("%d",&age);
	
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