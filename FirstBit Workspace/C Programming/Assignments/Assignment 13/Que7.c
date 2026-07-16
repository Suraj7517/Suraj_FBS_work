//7. Take two array and add sum in third array

void main(){
	int *arr1 = malloc(5 * sizeof(int));
	arr1[0]=43;
	arr1[1]=76;
	arr1[2]=86;
	arr1[3]=63;
	arr1[4]=76;
	int *arr2 = malloc(5 * sizeof(int));
	arr2[0]=85;
	arr2[1]=43;
	arr2[2]=85;
	arr2[3]=84;
	arr2[4]=33;
	int *arr3 = malloc(5 * sizeof(int));

	for(int i=0;i<5;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	printf("First Array:");
	for(int i=0;i<5;i++){
		printf("%d ",arr1[i]);
	}
	printf("\nSecond Array:");
	for(int i=0;i<5;i++){
		printf("%d ",arr2[i]);
	}
	printf("\nThird Array:");
	for(int i=0;i<5;i++){
		printf("%d ",arr3[i]);
	}

	
}