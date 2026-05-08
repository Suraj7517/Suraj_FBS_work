//2. Write a program to accept string from user and replace one character
//from special symbol.

void main(){
	char str[50];
	printf("Enter a string:");
	scanf("%s",str);
	char ch;
	printf("Enter the character which you want to replace:");
	scanf(" %c",&ch);
	char symbole;
	printf("Enter special symbole to replace:");
	scanf(" %c",&symbole);
	
	for(int i=0;str[i]!='\0';i++){
		if(str[i]==ch){
			str[i]=symbole;
		}
	}
	
	printf("Your replaced string is:%s",str);

}