//1. Find minimum and maximum number in array.
void main(){
	int arr[5]={11,62,9,21,94};
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	for(int i=1;i<5;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("The maximum number in this array is=%d\n",max);
	printf("The minimum number in this array is=%d",min);	
}