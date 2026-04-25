/*Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)*/
int divide();
void main(){
	int res=divide();
	
	if(res==1){
		printf("Number is divisible by both");
	}
	else if(res==2){
			printf("Number is only divisible by 3");
	}
	else if(res==3){
		printf("Number is only divisible by 5");		
	}
	else if(res==0)
		printf("Number divisible by none");
}
int divide(){
	int no;
	printf("Enter a number : ");
	scanf("%d",&no);
	
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