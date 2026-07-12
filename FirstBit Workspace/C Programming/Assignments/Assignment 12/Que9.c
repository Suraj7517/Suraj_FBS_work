/*9. WAP to Take in Two Strings and Display the Larger String without Using Built-in
Functions*/
void main(){
	char str[]="Hello Programmer";
	char str1[]="Welcome Programmer";
	
	int i=0,count=0,count1=0;
	while(str[i]!='\0'){
		count++;
		i++;
	}
	
	int j=0;
	while(str1[j]!='\0'){
		count1++;
		j++;
	}
	if(count>count1){
		printf("%s",str);
	}
	else if(count<count1){
		printf("%s",str1);
	}
	else{
		printf("Both are same");
	}
	
}