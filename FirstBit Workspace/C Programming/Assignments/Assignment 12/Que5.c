//5. WAP to Count the Number of Vowels in a String

void main(){
	char str[]="Hello";
	int count=0,i=0;
	while(str[i]!='\0'){
	if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' ||str[i]=='u'||
	   str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||str[i] == 'O' || str[i] == 'U'){
		count++;
	}
	
	i++;
}
	printf("Print Count is:%d",count);
}