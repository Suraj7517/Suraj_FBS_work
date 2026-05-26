//8. Merge two arrays
void main(){
	int arr1[5]={43,65,75,21,22};
	int arr2[5]={55,76,87,35,26};
	merge(arr1,arr2,5);
}
void merge(int* arr1,int* arr2,int size){
	int arr3[10]={};
	for(int i=0;i<10;i++){
		if(i<size){
			arr3[i]=arr1[i];
		}
		else{
			arr3[i]=arr2[i-size];
		}
			
		}

	for(int i=0;i<10;i++){
		printf(" %d",arr3[i]);
	}
}