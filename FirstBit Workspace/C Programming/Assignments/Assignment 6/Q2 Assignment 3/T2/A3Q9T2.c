/*9 Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome*/
int check();
void main(){
	int x=check();
	if(x){
		printf("Pallindrome number",x);
	}
	else{
		printf("Not a pallindrome number",x);
	}
}
int check()
{
	int no=121,rev=0,org,a;
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
