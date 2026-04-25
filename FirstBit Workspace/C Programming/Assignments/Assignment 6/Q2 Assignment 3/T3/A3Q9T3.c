/*9 Check the given number is Palindrome number or not.
Input: n = 121
Output: Palindrome*/
void check(int);
void main(){
	int no=121;
	check(no);
}
void check(int no)
{
int rev=0,org,a;
org=no;
while(no>0){
		a=no%10;
		no=no/10;
		rev=rev*10+a;
	}

org==rev?printf("%d is a pallindrome number",org):printf("%d is not a pallindrome number",org);
}
