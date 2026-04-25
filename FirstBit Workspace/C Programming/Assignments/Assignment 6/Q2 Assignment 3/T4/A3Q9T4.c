/*9 Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome*/
int check(int);
void main(){
	int no=121;
	int x=check(no);
	if(x){
		printf("Pallindrome number",x);
	}
	else{
		printf("Not a pallindrome number",x);
	}
}
int check(int no)
{
int rev=0,org,a;
org=no;
while(no>0){
		a=no%10;
		no=no/10;
		rev=rev*10+a;
	}
	if(org==rev){
		return 1;
	}
	else{
		return 0;
	}
}
