//9. Reverse the given array.
void main(){

    int arr1[5]={42,65,76,34,75};
    reverse(arr1,5);
    
	
}
void reverse(int * arr1,int size){
	int arr2[size];
	for(int i=0; i<size; i++){
        arr2[i]=arr1[size-1-i];
    }

    printf("Reversed array: ");

    for(int i=0; i<size; i++){
        printf("%d ",arr2[i]);
    }
}