//2. Print prime numbers in the given range 1 to n.
void main(){
	int no;
	printf("Enter a number : ");
	scanf("%d",&no);
	for(int j=2;j<=no;j++){
		int flag=1;
		for(int i=2;i<j;i++){
			if(j%i==0){
				flag=0;	
			}
					
		}
		if(flag==1){
			printf("%d\n",j);
		}
		
	}
}
