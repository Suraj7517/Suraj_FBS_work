/*4. Ask the user to enter marks.
Then show the result based on these rules:
If marks are more than 75 ? show "Distinction"
If marks are more than 65 ? show "First Class"
If marks are more than 55 ? show "Second Class"
If marks are 40 or more ? show "Pass Class"
If marks are less than 40 ? show "Fail"*/

int classGrade(int);
void main(){
	int marks;
	printf("Enter Your Marks:");
	scanf("%d",&marks);
	int grade=classGrade(marks);
	
	if(grade==1){
		printf("Distinction");
	}
	else if(grade==2){
		printf("First Class");
	}
	else if(grade==3){
		printf("Second Class");
	}
	else if(grade==4){
		printf("Pass Class");
	}
	else if(grade==5){
		printf("fail");
	}
}
int classGrade(int marks){
	if(marks>75){
		return 1;
	}
	else if(marks>65){
		return 2;
	}
	else if(marks>55){
		return 3;
	}
	else if(marks>=40){
		return 4;
	}
	else if (marks<40){
		return 5;
	}
}