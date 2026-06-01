//Searches a character in memory block.
void main(){
	char str[] = "Hello";
	printf("%s", (char *)memchr(str, 'l', 5));
}