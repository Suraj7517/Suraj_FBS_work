//3. Write a program to find greatest of three numbers using nested if-else.
int check(int,int,int);
void main(){
	int a=14,b=16,c=21;
	int n=check(a,b,c);
	if(n==1){
		printf("A is grater than others");
	}
	else if(n==2){
		printf("B is grater than others");
	}
	else if(n==3){
		printf("C is grter than others");
	}
	else if(n==0){
		printf("Some values are same");
	}
}
int check(int a,int b,int c){
	
	if(a==b || b==c || c==a){
		return 0;
	}
	else if(a>b){
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