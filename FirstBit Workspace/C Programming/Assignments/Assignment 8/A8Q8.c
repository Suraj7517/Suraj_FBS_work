//8. Merge two arrays
void main(){
	int arr1[5]={43,65,75,21,22};
	int arr2[5]={55,76,87,35,26};
	int arr3[10]={};
	for(int i=0;i<10;i++){
		if(i<5){
			arr3[i]=arr1[i];
		}
		else{
			arr3[i]=arr2[i-5];
		}
			
		}

	for(int i=0;i<10;i++){
		printf(" %d",arr3[i]);
	}
}