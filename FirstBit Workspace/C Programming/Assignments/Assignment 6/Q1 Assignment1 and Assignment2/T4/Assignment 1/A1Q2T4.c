//2. Write a program to check given 3 digit number is pallindrome or not.
int check(int,int,int,int);
void main(){
	int num=121,rev=0,ldigit=0, org=num;
	int n=check(num,rev,ldigit,org);
	
	if(n){
		printf("%d is a pallindrome number",org);
	}
	else{
		printf("%d is not a pallindrome number",org);
	}
}
int check(int num,int rev,int ldigit,int org){
	
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