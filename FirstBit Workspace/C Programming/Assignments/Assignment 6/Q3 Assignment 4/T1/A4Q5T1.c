/*5. Write a menu driven program to take a number for user and perform operations as follows.
Press 
1.To check number is even or odd.
2.To check number is prime or not.
3.To check number is pallindrome or not.
4.To check number is positive, negative or zero.
5.To reverse a number.
6.To find sum of digits.*/

void operation();
void main(){
	operation();
}
void operation(){
	int num,c;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("Enter choice : ");
	scanf("%d",&c);
	if(c==1){
		if(num%2==0){
			printf("The given number is even");
		}
		else{
			printf("The given number is odd");
		}
	}
	else if(c==2){
		int IsPrime = 1;
			
			if(num <= 1) {
			    IsPrime = 0;
			} else {
			    for(int i = 2; i <= num/2; i++){
			        if(num % i == 0){
			            IsPrime = 0;
			            break;
			        }
			    }
			}
			
			if(IsPrime)
			    printf("%d is a prime number", num);
			else
			    printf("%d is not a prime number", num);
	}
	else if(c==3){
		if(num>=0){
		
		int org=num;
		int a,rev=0;
		while(num>0){
			a=num%10;
			num=num/10;
			rev=rev*10+a;
		}

	org==rev?printf("%d is a pallindrome no",org):printf("%d is not a pallindrome no",org);
	}
	else{
		printf("Negative values are not allowed");
	}
}
	else if(c==4){
		int temp=num;
		if(temp>0){
			printf("%d Is a positive number",temp);
		}
		else if(temp<0){
			printf("%d Is a negative number",temp);
		}
		else{
			printf("%d Is Zero",num);
		}
	}
	else if(c==5){
		int a,rev=0,temp=num;
		if(num>=0){
			while(temp>0){
				a=temp%10;
				temp=temp/10;
				rev=rev*10+a;
				}
			printf("Your number in reverse order :%d",rev);
		}
		else{
			printf("Negative values are not allowed");
		}
	}
	else if(c==6){
		int temp=num;
		int sum=0;
		while(temp != 0){
			sum+=temp%10;
			temp=temp/10;
		}
		printf("The sum of digits : %d",sum);
	}
	else{
		printf("Invalid Input");
	}

}