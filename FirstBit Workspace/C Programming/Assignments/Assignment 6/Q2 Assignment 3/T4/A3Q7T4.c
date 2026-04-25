/*7 Find factorial of given number.
Input: n = 5
Output: 120*/
int check(int );
void main(){
	int n=5;
int x=check(n);
printf("The factorial is %d",x);
}
int check(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}