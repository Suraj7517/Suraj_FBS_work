//Moves memory safely even if source and destination overlap.

void main(){
	char str[] = "Hello";char a[] = "ABC";
char b[] = "ABC";

printf("%d", memcmp(a, b, 3));
	memmove(str+2, str,3);
	printf("%s", str);
	
}
