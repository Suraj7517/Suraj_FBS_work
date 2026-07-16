//9. Reverse the given array.
void main(){
    int *arr1 = malloc(5 * sizeof(int));
    arr1[0]=42;
    arr1[1]=65;
    arr1[2]=76;
    arr1[3]=34;
    arr1[4]=75;

 int *arr2 = malloc(5 * sizeof(int));
    for(int i=0; i<5; i++){
        arr2[i]=arr1[4-i];
    }

    printf("Reversed array: ");

    for(int i=0; i<5; i++){
        printf("%d ",arr2[i]);
    }
}