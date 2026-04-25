//1. Print armstrong numbers in the given range 1 to n.
void armstrong(int);
void main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	armstrong(num);	
}
void armstrong(int num){
	
	int org,digit=0,result=0,rem;
	for(int j=1;j<=num;j++){
		org=j;
		int a=j;
		digit = 0; 
        result = 0;
        
		while(a != 0){
			a=a/10;
			digit++;	
		}
		a=org;
		while(a != 0){
			rem=a%10;
			result+=pow(rem, digit);
			a/=10;
		}
		if(org==result){
			printf("%d\n",org);
		}
		
	}
}