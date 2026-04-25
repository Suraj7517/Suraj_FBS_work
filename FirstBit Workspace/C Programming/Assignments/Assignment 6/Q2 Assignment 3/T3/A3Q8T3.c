/*8 Check the given number is Strong number or not.
Input: n = 145
Output: Strong*/
void check(int);
void main(){
	int n=145;
	check(n);
}
void check(int n){
	int sum=0,fact,temp,org;
	org=n;
	while(n!=0){
		temp=n%10;
		fact=1;
		for(int i=1;i<=temp; i++){
			fact=fact*i;
		}
		sum+=fact;
		n=n/10;
	}
	if(sum==org){
		printf("Strong number");
	}
	else{
		printf("Not a strong number");
	}
	
}