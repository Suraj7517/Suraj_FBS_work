//1. Write a program to print sum of prime numbers in a given range.

void main(){
	int no;
	printf("Enter a number : ");
	scanf("%d",&no);
	int sum=0;
	for(int j=2;j<=no;j++){
		int flag=1;
		for(int i=2;i<j;i++){
			if(j%i==0){
				flag=0;	
			}
					
		}
		if(flag==1){
			printf("%d\n",j);
				sum=sum+j;
		}	
	}
	printf("Sum=%d",sum);
}
