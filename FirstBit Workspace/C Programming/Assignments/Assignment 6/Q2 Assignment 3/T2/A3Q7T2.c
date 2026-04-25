/*7 Find factorial of given number.
Input: n = 5
Output: 120*/
int check();
void main(){
int x=check();
printf("The factorial is %d",x);
}
int check(){
	int n=5,fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}