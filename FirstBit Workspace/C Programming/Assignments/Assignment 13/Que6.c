//6. Accept array and print only prime numbers of array.
void main(){
	printf("Enter Five numbers without 0 or 1:");
	int *arr = malloc(5 * sizeof(int));
	for(int i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		int isPrime=1;
		for(int j=2;j<arr[i];j++){
			if(arr[i]%j==0){
			isPrime=0;
			break;
			}
		}
		if(isPrime==1){
			printf("Prime number:%d\n",arr[i]);
		}
	}
}