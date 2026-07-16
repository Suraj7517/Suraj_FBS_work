//8. Merge two arrays
void main(){
	int *arr1 = malloc(5 * sizeof(int));
	arr1[0]=43;
	arr1[1]=65;
	arr1[2]=75;
	arr1[3]=21;
	arr1[4]=22;
	int arr2[5]={55,76,87,35,26};
	int *arr = malloc(5 * sizeof(int));
	arr2[0]=55;
	arr2[1]=76;
	arr2[2]=87;
	arr2[3]=35;
	arr2[4]=26;
	int *arr3 = malloc(10 * sizeof(int));
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