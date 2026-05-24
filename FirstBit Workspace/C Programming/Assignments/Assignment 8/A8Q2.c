void main(){
	int arr[5]={63,72,73,3,7};
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