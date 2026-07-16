//4. Find odd and even among the numbers.
void main(){
	int *arr = malloc(5 * sizeof(int));
	arr[0]=42;
	arr[1]=53;
	arr[2]=73;
	arr[3]=74;
	arr[4]=83;
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d is even\n",arr[i]);
		}
		else{
			printf("%d is odd\n",arr[i]);
		}
	}
}