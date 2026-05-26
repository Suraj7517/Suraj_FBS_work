//10.Sort Array
void main(){
	int arr[5]={90,80,70,60,50};
	sort(arr,5);
}
void sort(int * arr, int size){
	for(int i=0;i<size-1;i++){
		for(int j=0; j<size-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Array in ascending order:");
	for(int i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}