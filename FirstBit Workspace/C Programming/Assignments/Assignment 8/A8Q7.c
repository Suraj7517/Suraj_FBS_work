//7. Take two array and add sum in third array

void main(){
	int arr1[5]={23,32,44,55,43};
	int arr2[5]={43,36,44,85,45};
	int arr3[5]={};

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