/*Check the given number is prime or not.
Input: n = 7
Output: Prime*/
int check();
void main(){
int x=check();
if(x){
	printf("Prime Number");
}
else{
	printf("Not a prime number");
}
}
int check(){
		int no=7;
	int i=2,flag=0;
		while(i<=no/2){
			if(no%i==0){
				flag=1;
				break;
			}
		i++;
}
if(flag==0){
	return 1;
}
	else
	return 0;
}
