//6. Accept array and print only prime numbers of array.
void main(){
	printf("Enter Five numbers:");
	int arr[5]={};
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		int isPrime=1;
		for(int j=2;j<arr[i];j++){
			if(arr[i]%j==0){
			isPrime=0;
			}
		}
		if(isPrime==1){
			printf("Prime number:%d\n",arr[i]);
		}
	}
}