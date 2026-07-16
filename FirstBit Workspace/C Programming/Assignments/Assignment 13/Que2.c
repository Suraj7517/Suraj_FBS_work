void main(){
	int *arr = malloc(5 * sizeof(int));
	arr[0]=64;
	arr[0]=83;
	arr[0]=92;
	arr[0]=84;
	arr[0]=42;
	int found=0;
	int n=7;
	for(int i=0;i<5;i++){
		if(arr[i]==n){
			printf("Your number found at index %d",i);
			found=1;
		}
		
	}
	if(found==0){
		printf("Your number not found!");
	}
	
}