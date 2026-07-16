//5. Print alternate elements in array.
void main(){
	int *arr = malloc(5 * sizeof(int));
	arr[0]=74;
	arr[1]=83;
	arr[2]=88;
	arr[3]=53;
	arr[4]=85;
	
	for(int i=0;i<5;i=i+2){
			printf("%d\n",arr[i]);
	}
}