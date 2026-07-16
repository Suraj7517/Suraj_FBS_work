//10.Sort Array
void main(){
	int *arr = malloc(5 * sizeof(int));
	arr[0]=90;
	arr[1]=80;
	arr[2]=70;
	arr[3]=60;
	arr[4]=50;
	for(int i=0;i<5-1;i++){
		for(int j=0; j<5-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Array in ascending order:");
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
}