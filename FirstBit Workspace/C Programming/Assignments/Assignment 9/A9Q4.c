//4. Find odd and even among the numbers.
void main(){
	int arr[5]={22,63,42,73,98};
	find(arr,5);
}
void find(int * arr,int size){
	for(int i=0;i<5;i++){
		if(arr[i]%2==0){
			printf("%d is even\n",arr[i]);
		}
		else{
			printf("%d is odd\n",arr[i]);
		}
	}
}