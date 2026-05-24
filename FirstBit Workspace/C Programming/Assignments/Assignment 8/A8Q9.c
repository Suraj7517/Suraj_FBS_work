//9. Reverse the given array.
void main(){

    int arr1[5]={42,65,76,34,75};
    int arr2[5];

    for(int i=0; i<5; i++){
        arr2[i]=arr1[4-i];
    }

    printf("Reversed array: ");

    for(int i=0; i<5; i++){
        printf("%d ",arr2[i]);
    }
}