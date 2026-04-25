/*Check the given number is prime or not.
Input: n = 7
Output: Prime*/
void check();
void main(){
int no=7;
check(no);
}
void check(no){
		
	int i=2,flag=0;
		while(i<=no/2){
			if(no%i==0){
				flag=1;
				break;
			}
		i++;
}
if(flag==0){
	printf("Prime Number");
}
	else
	printf("Not a prime number");
}
