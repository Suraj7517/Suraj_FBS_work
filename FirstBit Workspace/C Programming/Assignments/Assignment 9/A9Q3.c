//3. Find sum of all numbers.
void main(){
	int arr[5]={42,63,62,83,99};
	getsum(arr);
	
}
void getsum(int *arr){
	int sum=0;
	for(int i=0;i<5;i++){
		sum+=arr[i];
	}
	printf("The sum of elements is=%d",sum);
}