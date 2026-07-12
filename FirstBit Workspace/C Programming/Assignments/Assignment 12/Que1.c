/*1. Write a program to scan string from user 
then scan a single character and search it*/
void main(){
	char str[50];
	char ch;
	printf("Enter A String: ");
	scanf("%s",str);
	
	printf("Enter charcter to search: ");
	scanf(" %c",&ch);
	
	int n=0;
	while(str[n] != '\0'){
		if(str[n]==ch){
			printf("Found at index:%d ",n);
		}	
		n++;
	}
}