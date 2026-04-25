/*Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)*/
int divide(int);
void main(){
	int no;
	printf("Enter a number : ");
	scanf("%d",&no);
	int n=divide(no);
	
	if(n==1){
		printf("Number is divisible by both");
	}
	else if(n==2){
			printf("Number is only divisible by 3");
	}
	else if(n==3){
		printf("Number is only divisible by 5");		
	}
	else if(n==0){
		printf("Number divisible by none");
	}
		
}
int divide(int no){
	
	if(no%3==0 && no%5==0){
		return 1;
	}
	else if(no%3==0){
			return 2;
	}
	else if(no%5==0){
		return 3;		
	}
	else
		return 0;
	
}