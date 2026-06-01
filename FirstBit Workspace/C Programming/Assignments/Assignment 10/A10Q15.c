//Copies memory block.
void main(){
	char str[] = "Hello";
	char str1[20];

	memcpy(str1, str, strlen(str)+1);
	printf("%s", str1);
}