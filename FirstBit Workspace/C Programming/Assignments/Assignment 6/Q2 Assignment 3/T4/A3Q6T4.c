/*6 Check the given number is Perfect number or not.
Input: n = 28
Output: Perfect*/
int check(int);
void main(){
	int n=28;
	int x=check(n);
	if(x){
    	printf("The number is a perfect number");
	}
	else{
		printf("The number is not a perfect number");
	}
}
int check(int n){
	int i=1,sum=0;
	while(i<n){
		if(n%i==0){
			sum=sum+i;
		}
		i++;
	}
	if(sum==n){
		return 1;
	}
	else{
		return 0;
	}

}