/*Accept a number and check if it is divisible by 3, 5, or both.
(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
both" or” Divisible by None”)*/
void divide(int);
void main(){
	int no;
	printf("Enter a number : ");
	scanf("%d",&no);
	devide(no);
}
void devide(int no){
	
	if(no%3==0 && no%5==0){
		printf("Number is divisible by both");
	}
	else if(no%3==0){
			printf("Number is only divisible by 3");
	}
	else if(no%5==0){
		printf("Number is only divisible by 5");		
	}
	else
		printf("Number divisible by none");
	
}