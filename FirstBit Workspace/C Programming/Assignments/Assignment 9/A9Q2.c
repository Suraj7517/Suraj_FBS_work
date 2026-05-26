void main(){
	int arr[5]={63,72,73,3,7};
	int n=7;
	find(arr,5,n);
}
void find(int * arr,int size,int n){
	int found=0;
	for(int i=0;i<size;i++){
		if(arr[i]==n){
			printf("Your number found at index %d",i);
			found=1;
		}
		
	}
	if(found==0){
		printf("Your number not found!");
	}
	
}