/*7 Find factorial of given number.
Input: n = 5
Output: 120*/
void check(int);
void main(){
	int n=5;
	check(n);
}
void check(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	printf("The factorial is %d",fact);
}