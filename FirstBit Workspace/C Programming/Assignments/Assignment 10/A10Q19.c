//Fills memory with a value.

void main(){
	char str[6];
	memset(str, 'A', 5);
	str[5] = '\0';

	printf("%s", str);
}
