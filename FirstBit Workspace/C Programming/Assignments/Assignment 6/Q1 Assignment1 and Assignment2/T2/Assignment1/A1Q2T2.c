//2. Write a program to check given 3 digit number is pallindrome or not.
int check();
void main(){
	int x=check();
	if(x){
		printf("Palindrome number");
	}
	else{
		printf("Not a palindrome number");
	}
}
int check(){
	int num=121,rev=0,ldigit=0, org=num;
	ldigit=num%10;
	num=num/10;
	rev=rev*10+ldigit;
	
	ldigit=num%10;
	num=num/10;
	rev=rev*10+ldigit;
	
	ldigit=num%10;
	num=num/10;
	rev=rev*10+ldigit;
	
	if(rev==org){
		
		return 1;
	}
	else{
		return 0;
	}
	
	
}