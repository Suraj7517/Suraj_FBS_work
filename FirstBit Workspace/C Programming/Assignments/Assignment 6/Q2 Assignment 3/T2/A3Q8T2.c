/*8 Check the given number is Strong number or not.
Input: n = 145
Output: Strong*/
int check();
void main(){
int x=check();
if(x){
	printf("Strong number");
}
else{
	printf("Not a Strong number");
}
}
int check(){
	int n=145,sum=0,fact,temp,org;
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
		return 1;
	}
	else{
		return 0;
	}
	
}