//5. Print alternate elements in array.
void main(){
	int arr[5]={26,74,92,33,38};
	show(arr,5);
}
void show(int * arr, int size){
		for(int i=0;i<5;i=i+2){
			printf("%d\n",arr[i]);
	}
}