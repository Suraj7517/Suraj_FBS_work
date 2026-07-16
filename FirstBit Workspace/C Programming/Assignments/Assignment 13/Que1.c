//1. Find minimum and maximum number in array.
void main(){
	int *arr = malloc(5 * sizeof(int));
	arr[0]=54;
	arr[1]=65;
	arr[2]=99;
	arr[3]=43;
	arr[4]=64;
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