//10.Sort Array
void main(){
	int arr[5]={90,80,70,60,50};
	
	for(int i=0;i<5-1;i++){
		for(int j=0; j<5-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("Array in ascending order: %d ",arr[i]);
	}
}