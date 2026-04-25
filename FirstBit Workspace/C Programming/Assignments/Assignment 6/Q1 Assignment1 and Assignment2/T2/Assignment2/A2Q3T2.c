//3. Write a program to find greatest of three numbers using nested if-else.
int	sizeFunc(int,int,int);
int main(){
	int a=14,b=16,c=16;
	int x=sizeFunc(a,b,c);
	
	if(x==1){
		printf("A is grater than others");
	}
	else if(x==2){
		printf("B is grater than others");
	}
	else if(x==3){
		printf("C is grater than others");
	}
	if(x==0){
		printf("Some values are same");
	}
	
}
int	sizeFunc(int a,int b,int c){
	
	if(a==b||b==c||a==c){
			return 0;
	}
	
	if(a>b){
		if(a>c){
			return 1;
		}
		else
			return 3;
				
	}
	else if(a<b){
		if(b>c){
			return 2;
		}
		else
		return 3;
	}
		
}