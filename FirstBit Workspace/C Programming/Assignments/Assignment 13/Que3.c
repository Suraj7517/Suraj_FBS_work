//3. Find sum of all numbers.
void main(){
	int *arr = malloc(5 * sizeof(int));
	arr[0]=42;
	arr[1]=74;
	arr[2]=83;
	arr[3]=43;
	arr[4]=93;
	int sum=0;
	for(int i=0;i<5;i++){
		sum+=arr[i];
	}
	printf("The sum of elements is=%d",sum);
}