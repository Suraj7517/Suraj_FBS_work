/*10 Find Sum of first and last digit of given number.
Input: n = 12345
Output: 6 (1 + 5)*/
int check(int);
void main(){
int n = 12345;
int x=check(n);
printf("Addition is :%d",x);
}
int check(int n){
	int digit=0,l,f,org,i=1;
	org=n;
	l=n%10;
	while(n!=0){
		digit++;
		n=n/10;
	}
	while(i<digit){
		org=org/10;
		i++;	
	}
	return org+l;
}
